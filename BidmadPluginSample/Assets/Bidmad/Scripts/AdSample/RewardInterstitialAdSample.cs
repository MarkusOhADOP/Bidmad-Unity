﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RewardInterstitialAdSample : MonoBehaviour
{
    static BidmadRewardInterstitial rewardInterstitial;
    // Start is called before the first frame update
    void Start()
    {
        BidmadCommon.setIsDebug(true);
    }

    public void LoadRewardInterstitialAd()
    {
#if UNITY_ANDROID
        if (rewardInterstitial == null)
            rewardInterstitial = new BidmadRewardInterstitial("a7ff876e-b665-4b81-afac-a7de41127ed1");
#elif UNITY_IOS
        if (rewardInterstitial == null)
            rewardInterstitial = new BidmadRewardInterstitial("29e1ef67-98d2-47b3-9fa2-9192327dd75d");
#endif
        rewardInterstitial.load();

        rewardInterstitial.setRewardInterstitialLoadCallback(OnRewardInterstitialLoad);
        rewardInterstitial.setRewardInterstitialShowCallback(OnRewardInterstitialShow);
        rewardInterstitial.setRewardInterstitialFailCallback(OnRewardInterstitialFail);
        rewardInterstitial.setRewardInterstitialCompleteCallback(OnRewardInterstitialComplete);
        rewardInterstitial.setRewardInterstitialSkipCallback(OnRewardInterstitialSkip);
        rewardInterstitial.setRewardInterstitialCloseCallback(OnRewardInterstitialClose);
    }

    public void ShowRewardInterstitialAd()
    {
        GameObject resource = Resources.Load<GameObject>("Prefabs/RewardInterstitialAdPopupSample"); 
        GameObject parent = GameObject.Find("Canvas"); 
        GameObject popup = Instantiate<GameObject>(resource, parent.transform, false); 
        popup.SetActive(true);

        RewardInterstitialAdPopupSample popupComponent = GameObject.Find("PopupSample").GetComponent<RewardInterstitialAdPopupSample>(); 

        popupComponent.SetPositiveCallBack(() => { 
            Debug.Log("PositiveCallBack"); 

            #if UNITY_ANDROID || UNITY_IOS
                if (rewardInterstitial.isLoaded()){
            
                    rewardInterstitial.show();
                }
            #endif

            Destroy(popup.gameObject); 
        });

        popupComponent.SetNagativeCallBack(() => { 
            Debug.Log("NagativeCallBack"); 
            Destroy(popup.gameObject); 
        });
    }

    void OnRewardInterstitialLoad()
    {
        Debug.Log("OnRewardInterstitialLoad Deletgate Callback Complate!!!");
    }

    void OnRewardInterstitialShow()
    {
        Debug.Log("OnRewardInterstitialShow Deletgate Callback Complate!!!");
    }

    void OnRewardInterstitialFail()
    {
        Debug.Log("OnRewardInterstitialFail Deletgate Callback Complate!!!");
    }

    void OnRewardInterstitialComplete()
    {
        Debug.Log("OnRewardInterstitialComplete Deletgate Callback Complate!!!");
    }

    void OnRewardInterstitialSkip()
    {
        Debug.Log("OnRewardInterstitialSkip Deletgate Callback Complate!!!");
    }

    void OnRewardInterstitialClose()
    {
        Debug.Log("OnRewardInterstitialClose Deletgate Callback Complate!!!");
    }
}
