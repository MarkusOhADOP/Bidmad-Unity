#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<BidmadTrackingAuthorizationStatus>
struct Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action>
struct KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action>
struct ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action>[]
struct EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5;
// BidmadManager[]
struct BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// BannerAdSample
struct BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D;
// BidmadBanner
struct BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371;
// BidmadCommon
struct BidmadCommon_t9D1AB35AFA3DF19EF05BDB49CF2DC3EAEBC9E065;
// BidmadGoogleGDPR
struct BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492;
// BidmadInterstitial
struct BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD;
// BidmadManager
struct BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132;
// BidmadReward
struct BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2;
// BidmadRewardInterstitial
struct BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09;
// ButtonEvent
struct ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// InterstitialAdSample
struct InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RewardAdSample
struct RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C;
// RewardInterstitialAdPopupSample
struct RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA;
// RewardInterstitialAdSample
struct RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// gameobject
struct gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// RewardInterstitialAdPopupSample/CallBack
struct CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60;
// RewardInterstitialAdSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008636B167DCA11A4DDBB742992D0228EF34946E;
IL2CPP_EXTERN_C String_t* _stringLiteral03AE09F5BF78ED1D5D4B893E844C793B6C613615;
IL2CPP_EXTERN_C String_t* _stringLiteral05A1BC9B6F4D773D47AFBD494466181F1C8AB452;
IL2CPP_EXTERN_C String_t* _stringLiteral0B19279223C818F83A5DB20A828E1565CED7B246;
IL2CPP_EXTERN_C String_t* _stringLiteral0C4C233863228637A411D152040FFD367000AE85;
IL2CPP_EXTERN_C String_t* _stringLiteral0D025B3E77BC6E74531FA2B6505012A351DE4EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral17951AE76D8617B5131E2F94AE738303E0192B17;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1C9EF48507F72CB993BDCCEE02B4B3A60703AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE1CCA14954AB164F04AC1A0A7D1E197A7BC6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral24025CD93FD3CEB6A729C721539B9574CEABFBCE;
IL2CPP_EXTERN_C String_t* _stringLiteral2864409BD8A8C27E92D0BAD3800CFC9660F890C1;
IL2CPP_EXTERN_C String_t* _stringLiteral350AC28639F1D447AB1E6C37A1DC42807E84D15A;
IL2CPP_EXTERN_C String_t* _stringLiteral3704CC7D744B262BB348DCDCECAC7F5366876CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral3E74588B5948ED26C0BB98DED627472119DD29A4;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral40C6D746CA396504489E13936C3805A6B5665355;
IL2CPP_EXTERN_C String_t* _stringLiteral477DAAAC734A45FC2BC8CAE47587064DB214B812;
IL2CPP_EXTERN_C String_t* _stringLiteral49F036C759D0BEDB8E8DE2C1ADAE5395217276B2;
IL2CPP_EXTERN_C String_t* _stringLiteral4E36EA1B423B51BEC1D73042E408767C1F26FAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral53146AE6220300695C467CD5E19D881597B6FD75;
IL2CPP_EXTERN_C String_t* _stringLiteral538ACDD04423D17E62AD28D117D10BC7E963AF44;
IL2CPP_EXTERN_C String_t* _stringLiteral55642FDA42F7072D59967DFFDF9B7C4779534DBD;
IL2CPP_EXTERN_C String_t* _stringLiteral55E5BCCB860EAFDA2416DACBAFDFA420A968F510;
IL2CPP_EXTERN_C String_t* _stringLiteral5866790B3FDB3A265FC4204068C20E90D744D524;
IL2CPP_EXTERN_C String_t* _stringLiteral592930CA27C658FD3579F246F7C87760F5420A51;
IL2CPP_EXTERN_C String_t* _stringLiteral5A971A74648F715C235490F32C339C215C36A7A2;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC6985F05605BFD0AC84B39C805FD3E709BD40C;
IL2CPP_EXTERN_C String_t* _stringLiteral5C150048EB3366E6EF1D434A1004C9EB8308606B;
IL2CPP_EXTERN_C String_t* _stringLiteral6074C66D052C813BFEEF4376C2AF3397F1B1327F;
IL2CPP_EXTERN_C String_t* _stringLiteral6170157DDA63A04D50CCDDC7537DF6BB420F3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral6AF64958C9C7EE71FAC114ADCD464C016A411A44;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF0A4051A9D102941B589F7D60FB946F6D2E574;
IL2CPP_EXTERN_C String_t* _stringLiteral7241DF913F869CD3B80717F9C0802503958B4518;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC4469DD15842F9A85ED129FBB9022367485B39;
IL2CPP_EXTERN_C String_t* _stringLiteral8586C5BCB8CE1799D76CC13FC21CDC8005398D51;
IL2CPP_EXTERN_C String_t* _stringLiteral8940A6C0FF088289AE4F81F0F71984A5D024EF56;
IL2CPP_EXTERN_C String_t* _stringLiteral9315C2E4928F127468946E8C1322471F11A08F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral967E8CDC8557F3CD42740A1C99F9BD969BFCD4DE;
IL2CPP_EXTERN_C String_t* _stringLiteral984E5D3792E09B7B17A6C0921423FC65E1EBDF85;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5B5613537BE5C03DA4C92CD4BB4AD82FDEFFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBEC8782920AD609F7F5BD94E89ED0A3384D52C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EBFCB1AC06756B55370872890D762C1765C474;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F3BE75A8FCC5EEEE48EAA07B6593D1F64E786C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003;
IL2CPP_EXTERN_C String_t* _stringLiteralA6557EC8E9D1D8936336FB2A28A8AA52F6BA6099;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9EC5C329FB9FA4328274119DD862607627129E;
IL2CPP_EXTERN_C String_t* _stringLiteralAD181BCDB4DA268237D1DAA478781B2556EADA32;
IL2CPP_EXTERN_C String_t* _stringLiteralB2A67DE575DF11F63A6133A2C5E9A1B6E1A7FF40;
IL2CPP_EXTERN_C String_t* _stringLiteralB33723F5F8501626F9EB13B1DA54743071BB6140;
IL2CPP_EXTERN_C String_t* _stringLiteralB51A3DEDC97CE1544DD918BA58C39AA71657E4E7;
IL2CPP_EXTERN_C String_t* _stringLiteralB51A80B4F89A134F79E70DFFED796C38B99B273D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7133EC90D376737BBD21D781F7131C0314CAC9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB760574A973A28B4006BA75F355496598905F2FC;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE388FBD774AE7D27FF3077484F17B2F87A8C42;
IL2CPP_EXTERN_C String_t* _stringLiteralC019C20A6749770AEB32F07210CC5BFD2778D9BD;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AAC6259BF93C20CDC4C54DCF9D4E82C94708D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC22DEC5F9F25536170F9B52FF2C688472EEA6F8A;
IL2CPP_EXTERN_C String_t* _stringLiteralCD585B5C92B287D270AEC0E7CC12667ACE35C0C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCD92A9D00937D82486B3F5C1AB70A15E165FEAAC;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC8752075CB65ED05B9E28FEF215E880B16A3B3;
IL2CPP_EXTERN_C String_t* _stringLiteralD03CDFFAEDC7873DFA717776AD675DE5118B7DF0;
IL2CPP_EXTERN_C String_t* _stringLiteralD4AB378A9F2B943A81B08D7B22766BEF74C7FA9C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA44ED6F3394CAAA0DBCBBA5FAF98B6DB3BCF59C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA94F5C771D0EFB13835986C4E7C04ED6530FAC5;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4A161F084A017D5C33465BC870C4B27C40209E;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA2C40069F927CA6CD7FD37681C1374C647DC2F;
IL2CPP_EXTERN_C String_t* _stringLiteralE05993E316009A93599B7DBB6920F3B936967439;
IL2CPP_EXTERN_C String_t* _stringLiteralE3C914C989B38D3855714B2A574368F95366638D;
IL2CPP_EXTERN_C String_t* _stringLiteralE564819543054AA8BE2E9BB83C221128FE042704;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE7A800F0260D3F1E076319D392C04655813AC1BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B186EB1DF4D21AB094BA0C504463BE9BEFC9A9;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB242FCD2856CB28E8490C34AD470E444D8D78A;
IL2CPP_EXTERN_C String_t* _stringLiteralEBBDF4C93003BCA4C572531F2530091D5F2799FE;
IL2CPP_EXTERN_C String_t* _stringLiteralED7A432E3F116ADBDFB0A250D7C0B832B9DD7249;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CA64C78C7F21F918529335AF0B74855B01C8DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mEBE7D1EA7E7A9CB356300EF5409AE10403E8602E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdSample_OnBannerClick_m0ECD3AFADB5FB41109145591F735528B6EF8A978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdSample_OnBannerFail_m57153C5FC83352CB677BEDFE2337D70FD383F0DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdSample_OnBannerLoad_mC4A57B594B7766DD0ED241D2A8689A50526FD03E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_mEEFEF09AE52B5D5536BF720020B0F2CC688F473C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA_m0C28F38AD6156A2FE10CE2316F2B8342AF697668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdSample_OnInterstitialClose_mDDF35B4FC392FC12B982BCCE69FA1379A6E4349B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdSample_OnInterstitialFail_mD456BFE672F3E455E2FF6D5E0E4E1933EF1D4472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdSample_OnInterstitialLoad_m9D816D139D8CFC818D8CE46E8D36F46668CBDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdSample_OnInterstitialShow_m997521B189F03D918BCAF313295FC999612BDED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_m81FE4F1886A35B423E68F0B8539FD46F94EC69E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardClose_m320B00D8DB7B2E79D094810635BADA94A5EE6CDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardComplete_m01ADC6410AFD68C093C216C3FC2E30D5E984513C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardFail_m09F36C1C9B6FFF62577CF3C2ECBEBDC75A2EFF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardLoad_mCCEBAC711BCCD1482948D7E37B111B2F2F439E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardShow_mA01E4E6D83D861686E3AE92181977968558F1B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardAdSample_OnRewardSkip_m6ABF81B44CEBFD8210D0F440BE34C949D4F9F543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialClose_mF500D755C8EF5A57C15A8506776C9EC3BC413AB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialComplete_m0F40B81F469EB3F2C24A1667A7630E3D39C024E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialFail_mBA442F3954CD7A7878F44B43C2A2E1D3E544AFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialLoad_mC11B603266E776402B731550302A928D2CD49A19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialShow_m7B43E34A29669F99A19101C84F74D7271E39103B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardInterstitialAdSample_OnRewardInterstitialSkip_mC5EBC943E64763FFB56A6DACF1E05B292BAB0809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__0_m674C714D259140F34A33C185B9375C43BEA7E881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__1_m2EBA3F3B2A5C0E47684289E54A3A11BA141ED8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_adTrackingAuthCallback_m6A3E2A14CEC53E8965766D8696356BD5B55C3A1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_onConsentFormDismissed_m2D5D2A1659E25E71E25D94C855341E3B447D28BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_onConsentFormLoadFailure_mBB5253817D450533B3688DC9C2CD01BEE827134E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_onConsentFormLoadSuccess_m20723D9971CB84A70BCA5B9E7FE4644DC8BCF920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_onConsentInfoUpdateFailure_m196FEC8599201B77FD16312FED43F029DFCD9377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gameobject_onConsentInfoUpdateSuccess_mC121E92BFAAA01F260E08D0A24CE5A7F0C9C56BA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___entries_1)); }
	inline EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___keys_7)); }
	inline KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___values_8)); }
	inline ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// BidmadBanner
struct BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371  : public RuntimeObject
{
public:
	// System.String BidmadBanner::mZoneId
	String_t* ___mZoneId_0;
	// System.Boolean BidmadBanner::setBannerPosition
	bool ___setBannerPosition_1;

public:
	inline static int32_t get_offset_of_mZoneId_0() { return static_cast<int32_t>(offsetof(BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371, ___mZoneId_0)); }
	inline String_t* get_mZoneId_0() const { return ___mZoneId_0; }
	inline String_t** get_address_of_mZoneId_0() { return &___mZoneId_0; }
	inline void set_mZoneId_0(String_t* value)
	{
		___mZoneId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mZoneId_0), (void*)value);
	}

	inline static int32_t get_offset_of_setBannerPosition_1() { return static_cast<int32_t>(offsetof(BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371, ___setBannerPosition_1)); }
	inline bool get_setBannerPosition_1() const { return ___setBannerPosition_1; }
	inline bool* get_address_of_setBannerPosition_1() { return &___setBannerPosition_1; }
	inline void set_setBannerPosition_1(bool value)
	{
		___setBannerPosition_1 = value;
	}
};


// BidmadCommon
struct BidmadCommon_t9D1AB35AFA3DF19EF05BDB49CF2DC3EAEBC9E065  : public RuntimeObject
{
public:
	// System.String BidmadCommon::UNITY_PLUGIN_VERSION
	String_t* ___UNITY_PLUGIN_VERSION_0;

public:
	inline static int32_t get_offset_of_UNITY_PLUGIN_VERSION_0() { return static_cast<int32_t>(offsetof(BidmadCommon_t9D1AB35AFA3DF19EF05BDB49CF2DC3EAEBC9E065, ___UNITY_PLUGIN_VERSION_0)); }
	inline String_t* get_UNITY_PLUGIN_VERSION_0() const { return ___UNITY_PLUGIN_VERSION_0; }
	inline String_t** get_address_of_UNITY_PLUGIN_VERSION_0() { return &___UNITY_PLUGIN_VERSION_0; }
	inline void set_UNITY_PLUGIN_VERSION_0(String_t* value)
	{
		___UNITY_PLUGIN_VERSION_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UNITY_PLUGIN_VERSION_0), (void*)value);
	}
};


// BidmadGoogleGDPR
struct BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492  : public RuntimeObject
{
public:

public:
};


// BidmadInterstitial
struct BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD  : public RuntimeObject
{
public:
	// System.String BidmadInterstitial::mZoneId
	String_t* ___mZoneId_0;

public:
	inline static int32_t get_offset_of_mZoneId_0() { return static_cast<int32_t>(offsetof(BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD, ___mZoneId_0)); }
	inline String_t* get_mZoneId_0() const { return ___mZoneId_0; }
	inline String_t** get_address_of_mZoneId_0() { return &___mZoneId_0; }
	inline void set_mZoneId_0(String_t* value)
	{
		___mZoneId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mZoneId_0), (void*)value);
	}
};


// BidmadReward
struct BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2  : public RuntimeObject
{
public:
	// System.String BidmadReward::mZoneId
	String_t* ___mZoneId_0;

public:
	inline static int32_t get_offset_of_mZoneId_0() { return static_cast<int32_t>(offsetof(BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2, ___mZoneId_0)); }
	inline String_t* get_mZoneId_0() const { return ___mZoneId_0; }
	inline String_t** get_address_of_mZoneId_0() { return &___mZoneId_0; }
	inline void set_mZoneId_0(String_t* value)
	{
		___mZoneId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mZoneId_0), (void*)value);
	}
};


// BidmadRewardInterstitial
struct BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09  : public RuntimeObject
{
public:
	// System.String BidmadRewardInterstitial::mZoneId
	String_t* ___mZoneId_0;

public:
	inline static int32_t get_offset_of_mZoneId_0() { return static_cast<int32_t>(offsetof(BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09, ___mZoneId_0)); }
	inline String_t* get_mZoneId_0() const { return ___mZoneId_0; }
	inline String_t** get_address_of_mZoneId_0() { return &___mZoneId_0; }
	inline void set_mZoneId_0(String_t* value)
	{
		___mZoneId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mZoneId_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// RewardInterstitialAdSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA  : public RuntimeObject
{
public:
	// UnityEngine.GameObject RewardInterstitialAdSample/<>c__DisplayClass3_0::popup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___popup_0;

public:
	inline static int32_t get_offset_of_popup_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA, ___popup_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_popup_0() const { return ___popup_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_popup_0() { return &___popup_0; }
	inline void set_popup_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___popup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popup_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// BidmadTrackingAuthorizationStatus
struct BidmadTrackingAuthorizationStatus_tACB38D30C3446733E6B1BC58F2678E57EFF0516B 
{
public:
	// System.Int32 BidmadTrackingAuthorizationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BidmadTrackingAuthorizationStatus_tACB38D30C3446733E6B1BC58F2678E57EFF0516B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<BidmadTrackingAuthorizationStatus>
struct Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// RewardInterstitialAdPopupSample/CallBack
struct CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BannerAdSample
struct BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields
{
public:
	// BidmadBanner BannerAdSample::banner
	BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * ___banner_4;

public:
	inline static int32_t get_offset_of_banner_4() { return static_cast<int32_t>(offsetof(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields, ___banner_4)); }
	inline BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * get_banner_4() const { return ___banner_4; }
	inline BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 ** get_address_of_banner_4() { return &___banner_4; }
	inline void set_banner_4(BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * value)
	{
		___banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___banner_4), (void*)value);
	}
};


// BidmadManager
struct BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicBannerLoad
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicBannerLoad_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicBannerFail
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicBannerFail_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicBannerClick
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicBannerClick_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicInterstitialLoad
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicInterstitialLoad_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicInterstitialShow
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicInterstitialShow_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicInterstitialFail
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicInterstitialFail_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicInterstitialClose
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicInterstitialClose_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardLoad
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardLoad_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardShow
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardShow_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardFail
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardFail_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardComplete
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardComplete_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardSkip
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardSkip_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardClose
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardClose_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialLoad
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialLoad_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialShow
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialShow_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialFail
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialFail_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialComplete
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialComplete_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialSkip
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialSkip_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> BidmadManager::dicRewardInterstitialClose
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___dicRewardInterstitialClose_22;
	// System.Action`1<BidmadTrackingAuthorizationStatus> BidmadManager::adTrackingAuthResponse
	Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * ___adTrackingAuthResponse_23;
	// System.Action BidmadManager::consentInfoUpdateSuccess
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___consentInfoUpdateSuccess_24;
	// System.Action`1<System.String> BidmadManager::consentInfoUpdateFailure
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___consentInfoUpdateFailure_25;
	// System.Action BidmadManager::consentFormLoadSuccess
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___consentFormLoadSuccess_26;
	// System.Action`1<System.String> BidmadManager::consentFormLoadFailure
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___consentFormLoadFailure_27;
	// System.Action`1<System.String> BidmadManager::consentFormDismissed
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___consentFormDismissed_28;

public:
	inline static int32_t get_offset_of_dicBannerLoad_4() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicBannerLoad_4)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicBannerLoad_4() const { return ___dicBannerLoad_4; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicBannerLoad_4() { return &___dicBannerLoad_4; }
	inline void set_dicBannerLoad_4(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicBannerLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicBannerLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_dicBannerFail_5() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicBannerFail_5)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicBannerFail_5() const { return ___dicBannerFail_5; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicBannerFail_5() { return &___dicBannerFail_5; }
	inline void set_dicBannerFail_5(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicBannerFail_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicBannerFail_5), (void*)value);
	}

	inline static int32_t get_offset_of_dicBannerClick_6() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicBannerClick_6)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicBannerClick_6() const { return ___dicBannerClick_6; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicBannerClick_6() { return &___dicBannerClick_6; }
	inline void set_dicBannerClick_6(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicBannerClick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicBannerClick_6), (void*)value);
	}

	inline static int32_t get_offset_of_dicInterstitialLoad_7() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicInterstitialLoad_7)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicInterstitialLoad_7() const { return ___dicInterstitialLoad_7; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicInterstitialLoad_7() { return &___dicInterstitialLoad_7; }
	inline void set_dicInterstitialLoad_7(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicInterstitialLoad_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicInterstitialLoad_7), (void*)value);
	}

	inline static int32_t get_offset_of_dicInterstitialShow_8() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicInterstitialShow_8)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicInterstitialShow_8() const { return ___dicInterstitialShow_8; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicInterstitialShow_8() { return &___dicInterstitialShow_8; }
	inline void set_dicInterstitialShow_8(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicInterstitialShow_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicInterstitialShow_8), (void*)value);
	}

	inline static int32_t get_offset_of_dicInterstitialFail_9() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicInterstitialFail_9)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicInterstitialFail_9() const { return ___dicInterstitialFail_9; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicInterstitialFail_9() { return &___dicInterstitialFail_9; }
	inline void set_dicInterstitialFail_9(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicInterstitialFail_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicInterstitialFail_9), (void*)value);
	}

	inline static int32_t get_offset_of_dicInterstitialClose_10() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicInterstitialClose_10)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicInterstitialClose_10() const { return ___dicInterstitialClose_10; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicInterstitialClose_10() { return &___dicInterstitialClose_10; }
	inline void set_dicInterstitialClose_10(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicInterstitialClose_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicInterstitialClose_10), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardLoad_11() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardLoad_11)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardLoad_11() const { return ___dicRewardLoad_11; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardLoad_11() { return &___dicRewardLoad_11; }
	inline void set_dicRewardLoad_11(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardShow_12() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardShow_12)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardShow_12() const { return ___dicRewardShow_12; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardShow_12() { return &___dicRewardShow_12; }
	inline void set_dicRewardShow_12(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardShow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardShow_12), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardFail_13() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardFail_13)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardFail_13() const { return ___dicRewardFail_13; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardFail_13() { return &___dicRewardFail_13; }
	inline void set_dicRewardFail_13(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardFail_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardFail_13), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardComplete_14() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardComplete_14)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardComplete_14() const { return ___dicRewardComplete_14; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardComplete_14() { return &___dicRewardComplete_14; }
	inline void set_dicRewardComplete_14(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardComplete_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardComplete_14), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardSkip_15() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardSkip_15)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardSkip_15() const { return ___dicRewardSkip_15; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardSkip_15() { return &___dicRewardSkip_15; }
	inline void set_dicRewardSkip_15(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardSkip_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardSkip_15), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardClose_16() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardClose_16)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardClose_16() const { return ___dicRewardClose_16; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardClose_16() { return &___dicRewardClose_16; }
	inline void set_dicRewardClose_16(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardClose_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardClose_16), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialLoad_17() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialLoad_17)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialLoad_17() const { return ___dicRewardInterstitialLoad_17; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialLoad_17() { return &___dicRewardInterstitialLoad_17; }
	inline void set_dicRewardInterstitialLoad_17(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialLoad_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialLoad_17), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialShow_18() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialShow_18)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialShow_18() const { return ___dicRewardInterstitialShow_18; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialShow_18() { return &___dicRewardInterstitialShow_18; }
	inline void set_dicRewardInterstitialShow_18(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialShow_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialShow_18), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialFail_19() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialFail_19)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialFail_19() const { return ___dicRewardInterstitialFail_19; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialFail_19() { return &___dicRewardInterstitialFail_19; }
	inline void set_dicRewardInterstitialFail_19(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialFail_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialFail_19), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialComplete_20() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialComplete_20)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialComplete_20() const { return ___dicRewardInterstitialComplete_20; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialComplete_20() { return &___dicRewardInterstitialComplete_20; }
	inline void set_dicRewardInterstitialComplete_20(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialSkip_21() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialSkip_21)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialSkip_21() const { return ___dicRewardInterstitialSkip_21; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialSkip_21() { return &___dicRewardInterstitialSkip_21; }
	inline void set_dicRewardInterstitialSkip_21(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialSkip_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialSkip_21), (void*)value);
	}

	inline static int32_t get_offset_of_dicRewardInterstitialClose_22() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___dicRewardInterstitialClose_22)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_dicRewardInterstitialClose_22() const { return ___dicRewardInterstitialClose_22; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_dicRewardInterstitialClose_22() { return &___dicRewardInterstitialClose_22; }
	inline void set_dicRewardInterstitialClose_22(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___dicRewardInterstitialClose_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dicRewardInterstitialClose_22), (void*)value);
	}

	inline static int32_t get_offset_of_adTrackingAuthResponse_23() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___adTrackingAuthResponse_23)); }
	inline Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * get_adTrackingAuthResponse_23() const { return ___adTrackingAuthResponse_23; }
	inline Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 ** get_address_of_adTrackingAuthResponse_23() { return &___adTrackingAuthResponse_23; }
	inline void set_adTrackingAuthResponse_23(Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * value)
	{
		___adTrackingAuthResponse_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adTrackingAuthResponse_23), (void*)value);
	}

	inline static int32_t get_offset_of_consentInfoUpdateSuccess_24() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___consentInfoUpdateSuccess_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_consentInfoUpdateSuccess_24() const { return ___consentInfoUpdateSuccess_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_consentInfoUpdateSuccess_24() { return &___consentInfoUpdateSuccess_24; }
	inline void set_consentInfoUpdateSuccess_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___consentInfoUpdateSuccess_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentInfoUpdateSuccess_24), (void*)value);
	}

	inline static int32_t get_offset_of_consentInfoUpdateFailure_25() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___consentInfoUpdateFailure_25)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_consentInfoUpdateFailure_25() const { return ___consentInfoUpdateFailure_25; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_consentInfoUpdateFailure_25() { return &___consentInfoUpdateFailure_25; }
	inline void set_consentInfoUpdateFailure_25(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___consentInfoUpdateFailure_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentInfoUpdateFailure_25), (void*)value);
	}

	inline static int32_t get_offset_of_consentFormLoadSuccess_26() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___consentFormLoadSuccess_26)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_consentFormLoadSuccess_26() const { return ___consentFormLoadSuccess_26; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_consentFormLoadSuccess_26() { return &___consentFormLoadSuccess_26; }
	inline void set_consentFormLoadSuccess_26(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___consentFormLoadSuccess_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentFormLoadSuccess_26), (void*)value);
	}

	inline static int32_t get_offset_of_consentFormLoadFailure_27() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___consentFormLoadFailure_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_consentFormLoadFailure_27() const { return ___consentFormLoadFailure_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_consentFormLoadFailure_27() { return &___consentFormLoadFailure_27; }
	inline void set_consentFormLoadFailure_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___consentFormLoadFailure_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentFormLoadFailure_27), (void*)value);
	}

	inline static int32_t get_offset_of_consentFormDismissed_28() { return static_cast<int32_t>(offsetof(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields, ___consentFormDismissed_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_consentFormDismissed_28() const { return ___consentFormDismissed_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_consentFormDismissed_28() { return &___consentFormDismissed_28; }
	inline void set_consentFormDismissed_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___consentFormDismissed_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentFormDismissed_28), (void*)value);
	}
};


// ButtonEvent
struct ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// InterstitialAdSample
struct InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields
{
public:
	// BidmadInterstitial InterstitialAdSample::interstitial
	BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * ___interstitial_4;

public:
	inline static int32_t get_offset_of_interstitial_4() { return static_cast<int32_t>(offsetof(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields, ___interstitial_4)); }
	inline BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * get_interstitial_4() const { return ___interstitial_4; }
	inline BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD ** get_address_of_interstitial_4() { return &___interstitial_4; }
	inline void set_interstitial_4(BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * value)
	{
		___interstitial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitial_4), (void*)value);
	}
};


// RewardAdSample
struct RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields
{
public:
	// BidmadReward RewardAdSample::reward
	BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * ___reward_4;

public:
	inline static int32_t get_offset_of_reward_4() { return static_cast<int32_t>(offsetof(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields, ___reward_4)); }
	inline BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * get_reward_4() const { return ___reward_4; }
	inline BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 ** get_address_of_reward_4() { return &___reward_4; }
	inline void set_reward_4(BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * value)
	{
		___reward_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reward_4), (void*)value);
	}
};


// RewardInterstitialAdPopupSample
struct RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text RewardInterstitialAdPopupSample::txtMsg
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtMsg_4;
	// UnityEngine.UI.Text RewardInterstitialAdPopupSample::txtButtonYes
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtButtonYes_5;
	// UnityEngine.UI.Text RewardInterstitialAdPopupSample::txtButtonNo
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtButtonNo_6;
	// RewardInterstitialAdPopupSample/CallBack RewardInterstitialAdPopupSample::positiveCallBack
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___positiveCallBack_7;
	// RewardInterstitialAdPopupSample/CallBack RewardInterstitialAdPopupSample::nagativeCallBack
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___nagativeCallBack_8;
	// System.String RewardInterstitialAdPopupSample::mTimer
	String_t* ___mTimer_9;
	// System.Single RewardInterstitialAdPopupSample::mTotalSeconds
	float ___mTotalSeconds_10;

public:
	inline static int32_t get_offset_of_txtMsg_4() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___txtMsg_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtMsg_4() const { return ___txtMsg_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtMsg_4() { return &___txtMsg_4; }
	inline void set_txtMsg_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtMsg_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtMsg_4), (void*)value);
	}

	inline static int32_t get_offset_of_txtButtonYes_5() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___txtButtonYes_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtButtonYes_5() const { return ___txtButtonYes_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtButtonYes_5() { return &___txtButtonYes_5; }
	inline void set_txtButtonYes_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtButtonYes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtButtonYes_5), (void*)value);
	}

	inline static int32_t get_offset_of_txtButtonNo_6() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___txtButtonNo_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtButtonNo_6() const { return ___txtButtonNo_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtButtonNo_6() { return &___txtButtonNo_6; }
	inline void set_txtButtonNo_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtButtonNo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtButtonNo_6), (void*)value);
	}

	inline static int32_t get_offset_of_positiveCallBack_7() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___positiveCallBack_7)); }
	inline CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * get_positiveCallBack_7() const { return ___positiveCallBack_7; }
	inline CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** get_address_of_positiveCallBack_7() { return &___positiveCallBack_7; }
	inline void set_positiveCallBack_7(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * value)
	{
		___positiveCallBack_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveCallBack_7), (void*)value);
	}

	inline static int32_t get_offset_of_nagativeCallBack_8() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___nagativeCallBack_8)); }
	inline CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * get_nagativeCallBack_8() const { return ___nagativeCallBack_8; }
	inline CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** get_address_of_nagativeCallBack_8() { return &___nagativeCallBack_8; }
	inline void set_nagativeCallBack_8(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * value)
	{
		___nagativeCallBack_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nagativeCallBack_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTimer_9() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___mTimer_9)); }
	inline String_t* get_mTimer_9() const { return ___mTimer_9; }
	inline String_t** get_address_of_mTimer_9() { return &___mTimer_9; }
	inline void set_mTimer_9(String_t* value)
	{
		___mTimer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTimer_9), (void*)value);
	}

	inline static int32_t get_offset_of_mTotalSeconds_10() { return static_cast<int32_t>(offsetof(RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA, ___mTotalSeconds_10)); }
	inline float get_mTotalSeconds_10() const { return ___mTotalSeconds_10; }
	inline float* get_address_of_mTotalSeconds_10() { return &___mTotalSeconds_10; }
	inline void set_mTotalSeconds_10(float value)
	{
		___mTotalSeconds_10 = value;
	}
};


// RewardInterstitialAdSample
struct RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields
{
public:
	// BidmadRewardInterstitial RewardInterstitialAdSample::rewardInterstitial
	BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * ___rewardInterstitial_4;

public:
	inline static int32_t get_offset_of_rewardInterstitial_4() { return static_cast<int32_t>(offsetof(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields, ___rewardInterstitial_4)); }
	inline BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * get_rewardInterstitial_4() const { return ___rewardInterstitial_4; }
	inline BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 ** get_address_of_rewardInterstitial_4() { return &___rewardInterstitial_4; }
	inline void set_rewardInterstitial_4(BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * value)
	{
		___rewardInterstitial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardInterstitial_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// gameobject
struct gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BidmadGoogleGDPR gameobject::gGdpr
	BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * ___gGdpr_4;

public:
	inline static int32_t get_offset_of_gGdpr_4() { return static_cast<int32_t>(offsetof(gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D, ___gGdpr_4)); }
	inline BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * get_gGdpr_4() const { return ___gGdpr_4; }
	inline BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 ** get_address_of_gGdpr_4() { return &___gGdpr_4; }
	inline void set_gGdpr_4(BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * value)
	{
		___gGdpr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gGdpr_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// BidmadManager[]
struct BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * m_Items[1];

public:
	inline BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void BidmadCommon::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F (bool ___isDebug0, const RuntimeMethod* method);
// System.Void BidmadBanner::.ctor(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__ctor_m7A93F039154C99E03A11EC8B6D6B374740A824B0 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, String_t* ___zoneId0, float ____y1, const RuntimeMethod* method);
// System.Void BidmadBanner::setRefreshInterval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setRefreshInterval_mFFF84FB95CC7F94F6E515D21A04E48C0F781FA6B (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, int32_t ___time0, const RuntimeMethod* method);
// System.Void BidmadBanner::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_load_mF3DDE74572B669C0E4FA34F894A9F3F3089B764D (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void BidmadBanner::setBannerLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerLoadCallback_m0146ABD2639BF4B12E8FC2CA61AC7035027E1037 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadBanner::setBannerFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerFailCallback_mE6AA0EB1600E9929A2ADB08079EFFD1B63662CA3 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadBanner::setBannerClickCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerClickCallback_m83106F4FEE6E05F8831CCC6B4302D0BEA671CF8F (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void BidmadBanner::removeBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_removeBanner_mBE5F068DDAB3409133B2777378BC75024EE5C9CD (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadNewInstanceBannerAutoCenter(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadNewInstanceBannerAutoCenter_mC57E1F42C1DF7A4FE1C57C214E31A02A1F20246C (String_t* ___zoneId0, float ____y1, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadNewInstanceBanner(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadNewInstanceBanner_m665F8E33BF067417FA0834CB583883A398A9580C (String_t* ___zoneId0, float ____x1, float ____y2, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadSetRefreshInterval(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadSetRefreshInterval_m3094753334AB84BA90FC27DFE1A1CD50529C9935 (String_t* ___zoneId0, int32_t ___time1, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadRemoveBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadRemoveBanner_m2671AB12AADC741FD864C3E9140FD76D736BD5E7 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadLoadBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadLoadBanner_m05223AE148EFE60AE354B41E994CE447A0C8F6A9 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadHideBannerView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadHideBannerView_m49F086F1A036D1365021EEE88313B4C35038E582 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadBanner::_bidmadShowBannerView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadShowBannerView_m9AA7866AFC51139FC28FBD0528D6790BDA523CA5 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::Remove(!0)
inline bool Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49 (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(!0,!1)
inline void Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896 (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadSetDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetDebug_mADC35E1917F0A5453CC99BCAF5EBB2707E707414 (bool ___isDebug0, const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadSetGgTestDeviceid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetGgTestDeviceid_m93E9191EF2F365D1EF74AC0B56DD6361C37D9636 (String_t* ___deviceId0, const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadSetGDPRSetting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetGDPRSetting_mC0C00CFDF88FB2CF491ECFC1912DBF671E298C0B (bool ___consent0, const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadSetUseArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetUseArea_mAEB7C1CF65D40A0532006E0FF7F4C1539A8B41B9 (bool ___useArea0, const RuntimeMethod* method);
// System.Int32 BidmadCommon::_bidmadGetGdprConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadCommon__bidmadGetGdprConsent_m1513D7B170F69A3CE98D729DE86FDEBF9950FABB (const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadReqAdTrackingAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadReqAdTrackingAuthorization_m31825F4D95E945FC83D04A0A2EE3DC12E5858742 (const RuntimeMethod* method);
// System.Void BidmadCommon::_bidmadSetAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetAdvertiserTrackingEnabled_mEC7E2219FF989CA06BE429337F9A8E5357BEBABB (bool ___enable0, const RuntimeMethod* method);
// System.Boolean BidmadCommon::_bidmadGetAdvertiserTrackingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadCommon__bidmadGetAdvertiserTrackingEnabled_m5187C70F399AB3E3539D4028009E1906BCA6609C (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleNewInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleNewInstance_mC8DE7C2669076A2AD6A7C95580B640E097F26AA5 (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetListener_m062E07F599703655E53B40C91951ED48B08B40AB (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetDelegate_m69F73D3143127BCB73B79B604AAE273389EE78AD (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetDebug(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetDebug_m12DCFCB6D5B94746449CAD68E57A9DB84A4713C1 (String_t* ___testDeviceId0, bool ___isTestEurope1, const RuntimeMethod* method);
// System.Boolean BidmadGoogleGDPR::_bidmadGDPRforGoogleIsConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadGoogleGDPR__bidmadGDPRforGoogleIsConsentFormAvailable_mAB97DDFC29A17E552BA20C8477369B70D9CAAE2F (const RuntimeMethod* method);
// System.Int32 BidmadGoogleGDPR::_bidmadGDPRforGoogleGetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadGoogleGDPR__bidmadGDPRforGoogleGetConsentStatus_mED65CCB8D7121EF1491A6C288A28608FBF9A9D16 (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleReset_mA821D0E29AA07476E947A6A4F78AD45830115B8F (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleRequestConsentInfoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleRequestConsentInfoUpdate_m7AA8562240F2E85051F389C2E994678EA5DA2899 (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleLoadForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleLoadForm_mFB289A3B10520CE31B1C3014F8948C790580A290 (const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleShowForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleShowForm_m5FF4D8182F5C6F2F0A39E2D564D15DD2BA172FA5 (const RuntimeMethod* method);
// System.Void BidmadInterstitial::_bidmadNewInstanceInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadNewInstanceInterstitial_mA6B717CC379B8C0A888A0EF4A714B59ADB090843 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::_bidmadLoadInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadLoadInterstitial_mB037C3D97672D04531488ADC7CA7A5504E0A7746 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::_bidmadShowInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadShowInterstitial_m260EEBC1B257D0A580847CF55D11907DF1BCCF84 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Boolean BidmadInterstitial::_bidmadIsLoadedInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadInterstitial__bidmadIsLoadedInterstitial_mC4C5EED21E29C77A18C04761D66A1764430E27AA (String_t* ___zoneId0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Action>::get_Item(!0)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void BidmadInterstitial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__ctor_m9109914B6B3069693795EBD4B830AE74512D0391 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_load_m7CAF6D5F5D6D886967102682A495CE2C6ACEAC63 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method);
// System.Void BidmadReward::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__ctor_mDC3FAAB42909DE9BE02536EB28503D8357D980E9 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadReward::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_load_mAD70D011B954975A8281A6F5E43AAAD5DAA067C7 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__ctor_m75FF6236655C42AC2D846CC4D73C0D389C85EE89 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_load_mA53DDD17FCAEED209770C5C97E51FB3A3B04CE65 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Action`1<BidmadTrackingAuthorizationStatus>::Invoke(!0)
inline void Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
inline void Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6 (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void BidmadReward::_bidmadNewInstanceReward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadNewInstanceReward_mBDD23BC7127C516FC95AB5A95EE3E1D01FF1CF79 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadReward::_bidmadLoadRewardVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadLoadRewardVideo_m19F549098A86E15175C9FD44ED85BAD8D6B5341A (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadReward::_bidmadShowRewardVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadShowRewardVideo_m530750F9CE5B43450E4AE43FC77DBFE02AAD5271 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Boolean BidmadReward::_bidmadIsLoadedReward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadReward__bidmadIsLoadedReward_mAD1C92EA673B8696976A999E3007D4B98DF9DC4C (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::_bidmadNewInstanceRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadNewInstanceRewardInterstitial_m64086DA9FCBFDAAA3309D61F025C3A61D3340634 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::_bidmadLoadRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadLoadRewardInterstitial_m8C3D7D48948A51044C080506FCD9E26BA766903F (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::_bidmadShowRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadShowRewardInterstitial_m13610BE9F5F217B76C45B4E38C0B4F44487D4C09 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Boolean BidmadRewardInterstitial::_bidmadIsLoadedRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadRewardInterstitial__bidmadIsLoadedRewardInterstitial_mCDE5E63E53368FD0F4020021802DFFD017B923D1 (String_t* ___zoneId0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::setInterstitialLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialLoadCallback_m181AAA28D5840DCD3C76F315E37E654B77BD5A85 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::setInterstitialShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialShowCallback_m9F8C64C7ED11ACBF6D899B5510A41EC355493621 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::setInterstitialFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialFailCallback_m38FA765FD37D0E5DDFD67D76944B7B7189C1C8A2 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadInterstitial::setInterstitialCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialCloseCallback_m5CAC78B2E4FF8D1E3E2891A5F28D19AD89426456 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Boolean BidmadInterstitial::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadInterstitial_isLoaded_mA30EA4EBB634243D4195DE477A80B48637455B7C (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method);
// System.Void BidmadInterstitial::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_show_m731AE31A4754C69FBAC71A37577769EEB6409422 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardLoadCallback_m017F66CF1C5AD16CE2AD80039C2999E4BC4E4CF8 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardShowCallback_mA81A32974D7E056249FF9F03EE22DFC9F3ED0D6D (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardFailCallback_m3E04ACB89548956DCF9373D5BDA6B268C03EB521 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardCompleteCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardCompleteCallback_m629333D4BDFFDC309521EC3D73D90EEB55154E06 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardSkipCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardSkipCallback_m3083525DA1E4431D753E8F59BF1F6DE45D3D1F3D (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadReward::setRewardCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardCloseCallback_mDCB57CD5769F9F9461D6E6A3D22D38C330A72808 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Boolean BidmadReward::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadReward_isLoaded_m098D49A80271A8D2AC631B0D428DE313FDDB4C41 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method);
// System.Void BidmadReward::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_show_m123FA678E5B9D49DE31083B0FB201C39997134B9 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String RewardInterstitialAdPopupSample::CountdownTimer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardInterstitialAdPopupSample_CountdownTimer_mFCBB1F8D72A1F31D02E7117C98F0250C9314861F (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, bool ___IsUpdate0, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::SetZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetZero_m9962E2D1B963A73A1B48071B68B4346F4E2F616C (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::OnPositiveEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_OnPositiveEvent_m730E753C991924886622A0BA8346A4D8DC6394DE (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::add_positiveCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_add_positiveCallBack_m3B65AFD1C43EA9D9D588058F33A1B072858CEEB0 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::add_nagativeCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_add_nagativeCallBack_mD52BBA926C04D4060A7F106701AD07EBF6A2290D (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample/CallBack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallBack_Invoke_mFDE4177A6F355AA89336CF90564A7843A92A47DC (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialLoadCallback_mCA2BB3902D26CDE356F3B0AFF15A364329AE9AC4 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialShowCallback_m2C66EFBEEDB7CB9319F4547EA7D5E110491E0646 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialFailCallback_mEF12F8E26A576ECBCFF6C74723CEC1F149501E07 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialCompleteCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialCompleteCallback_m781F124A493310A4C4E599210CBE3E615D8F1DD7 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialSkipCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialSkipCallback_mD7BC3975391904E1B002FBB3F2E3275DA55F8791 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::setRewardInterstitialCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialCloseCallback_m26F1AB6C22E53D9E2C81A786D0B2BAF28E2837DE (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void RewardInterstitialAdSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD205169CFD0CCBE91818573CC89FD65533BDCB35 (U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<RewardInterstitialAdPopupSample>()
inline RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * GameObject_GetComponent_TisRewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA_m0C28F38AD6156A2FE10CE2316F2B8342AF697668 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void RewardInterstitialAdPopupSample/CallBack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallBack__ctor_m85EFD7051DE674AA6B2D4BFD903A8AA03CB668F8 (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::SetPositiveCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetPositiveCallBack_m18899B1AFA3552E280C8AC219D61B12BC415D561 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___listener0, const RuntimeMethod* method);
// System.Void RewardInterstitialAdPopupSample::SetNagativeCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetNagativeCallBack_m4762080EBFEAB166B57CC9903546F3301F913E37 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<BidmadManager>()
inline BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * GameObject_AddComponent_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_mEEFEF09AE52B5D5536BF720020B0F2CC688F473C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<BidmadManager>()
inline BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C* Object_FindObjectsOfType_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_m81FE4F1886A35B423E68F0B8539FD46F94EC69E1 (const RuntimeMethod* method)
{
	return ((  BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__ctor_mABA0D8CFFC4451FEC9E417525F6EEC7F0B76A237 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_reset_mBBA632CDDAA62006F54D7D91789415978A069709 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::setConsentInfoUpdateSuccessCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentInfoUpdateSuccessCallback_m1F475CD106C68C9F8D05831E6258C130953B600D (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BidmadGoogleGDPR::setConsentInfoUpdateFailureCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentInfoUpdateFailureCallback_m8175A5D8D04A04B6C9F956788E1F8ACF90238C8C (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::setConsentFormLoadSuccessCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormLoadSuccessCallback_mCC480DCB897E48F2B2EFD36665AC05C560FDADC4 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::setConsentFormLoadFailureCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormLoadFailureCallback_m2D11A6140C9A2012246A509E5A141242BABF1597 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::setConsentFormDismissedCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormDismissedCallback_m285404D32B402D8C3DE6C7A6A327933E725B196A (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::setDebug(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setDebug_m50D9DC406E376F0BBA10E2841F924362B5C8BE90 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, String_t* ___testDeviceId0, bool ___isEEA1, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::requestConsentInfoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_requestConsentInfoUpdate_m72C6F6C5107B1D45DCDBDFB19313DA3E9D8E1AF1 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Void BidmadCommon::setGdprConsent(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setGdprConsent_m4E989BAAC4B5AF9BC89ECBEB4E9834960CDB7C72 (bool ___consent0, bool ___useArea1, const RuntimeMethod* method);
// System.Int32 BidmadCommon::getGdprConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadCommon_getGdprConsent_mD81A582ECB8FCD2427BA992B8D6BA30BA9AFB1F8 (bool ___useArea0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void System.Action`1<BidmadTrackingAuthorizationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mEBE7D1EA7E7A9CB356300EF5409AE10403E8602E (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BidmadCommon::reqAdTrackingAuthorization(System.Action`1<BidmadTrackingAuthorizationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_reqAdTrackingAuthorization_mCBCC75AA6EE7A237B22036D341AC094ED164F068 (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * ___callback0, const RuntimeMethod* method);
// System.Boolean BidmadGoogleGDPR::isConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadGoogleGDPR_isConsentFormAvailable_m915E7C75BA828445336321EE42ED79524CC3FEED (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::loadForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_loadForm_m9584205C03B9AFF87C5A5C91DA95DFB4BBC448BF (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Int32 BidmadGoogleGDPR::getConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadGoogleGDPR_getConsentStatus_m06014526AD47246B71325E4B7C48D89382978C0B (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Void BidmadGoogleGDPR::showForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_showForm_m9D61A67198F2475B02E72A38B0E726BBE01C2ED7 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method);
// System.Boolean BidmadRewardInterstitial::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadRewardInterstitial_isLoaded_mAEC2A7A0F4F749DB95AF0DBD141394839DA090A3 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method);
// System.Void BidmadRewardInterstitial::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_show_m5624AB3696DE1EEA58F43C7C6D8EF1AA9184B949 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadNewInstanceBanner(char*, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadNewInstanceBannerAutoCenter(char*, float);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetRefreshInterval(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadLoadBanner(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadRemoveBanner(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadHideBannerView(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadShowBannerView(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetDebug(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetGgTestDeviceid(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetGDPRSetting(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetUseArea(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadGetGdprConsent();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadReqAdTrackingAuthorization();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadSetAdvertiserTrackingEnabled(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadGetAdvertiserTrackingEnabled();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleNewInstance();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleSetListener();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleSetDebug(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleRequestConsentInfoUpdate();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadGDPRforGoogleIsConsentFormAvailable();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleLoadForm();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadGDPRforGoogleGetConsentStatus();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleReset();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleSetDelegate();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadGDPRforGoogleShowForm();
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadNewInstanceInterstitial(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadLoadInterstitial(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadShowInterstitial(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadIsLoadedInterstitial(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadNewInstanceReward(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadLoadRewardVideo(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadShowRewardVideo(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadIsLoadedReward(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadNewInstanceRewardInterstitial(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadLoadRewardInterstitial(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _bidmadShowRewardInterstitial(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _bidmadIsLoadedRewardInterstitial(char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BannerAdSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_Start_m98A4421E77C176CEE976329EB419B877AA7458E9 (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	{
		// BidmadCommon.setIsDebug(true);
		BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::LoadBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_LoadBannerAd_mC634BC7D5B000314CF4D066D156E985253841B1C (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdSample_OnBannerClick_m0ECD3AFADB5FB41109145591F735528B6EF8A978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdSample_OnBannerFail_m57153C5FC83352CB677BEDFE2337D70FD383F0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdSample_OnBannerLoad_mC4A57B594B7766DD0ED241D2A8689A50526FD03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538ACDD04423D17E62AD28D117D10BC7E963AF44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// banner = new BidmadBanner("1c3e3085-333f-45af-8427-2810c26a72fc", 130);
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_0 = (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 *)il2cpp_codegen_object_new(BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371_il2cpp_TypeInfo_var);
		BidmadBanner__ctor_m7A93F039154C99E03A11EC8B6D6B374740A824B0(L_0, _stringLiteral538ACDD04423D17E62AD28D117D10BC7E963AF44, (130.0f), /*hidden argument*/NULL);
		((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->set_banner_4(L_0);
		// banner.setRefreshInterval(80);
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_1 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		NullCheck(L_1);
		BidmadBanner_setRefreshInterval_mFFF84FB95CC7F94F6E515D21A04E48C0F781FA6B(L_1, ((int32_t)80), /*hidden argument*/NULL);
		// banner.load();
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_2 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		NullCheck(L_2);
		BidmadBanner_load_mF3DDE74572B669C0E4FA34F894A9F3F3089B764D(L_2, /*hidden argument*/NULL);
		// banner.setBannerLoadCallback(OnBannerLoad);
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_3 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)BannerAdSample_OnBannerLoad_mC4A57B594B7766DD0ED241D2A8689A50526FD03E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		BidmadBanner_setBannerLoadCallback_m0146ABD2639BF4B12E8FC2CA61AC7035027E1037(L_3, L_4, /*hidden argument*/NULL);
		// banner.setBannerFailCallback(OnBannerFail);
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_5 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)BannerAdSample_OnBannerFail_m57153C5FC83352CB677BEDFE2337D70FD383F0DE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		BidmadBanner_setBannerFailCallback_mE6AA0EB1600E9929A2ADB08079EFFD1B63662CA3(L_5, L_6, /*hidden argument*/NULL);
		// banner.setBannerClickCallback(OnBannerClick);
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_7 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)BannerAdSample_OnBannerClick_m0ECD3AFADB5FB41109145591F735528B6EF8A978_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		BidmadBanner_setBannerClickCallback_m83106F4FEE6E05F8831CCC6B4302D0BEA671CF8F(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::removeBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_removeBanner_mD43E623E52DA14E3FD7CB3675E3D2E7E25795FE4 (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA94F5C771D0EFB13835986C4E7C04ED6530FAC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("removeBanner!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDA94F5C771D0EFB13835986C4E7C04ED6530FAC5, /*hidden argument*/NULL);
		// banner.removeBanner();
		BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * L_0 = ((BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D_il2cpp_TypeInfo_var))->get_banner_4();
		NullCheck(L_0);
		BidmadBanner_removeBanner_mBE5F068DDAB3409133B2777378BC75024EE5C9CD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::OnBannerLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_OnBannerLoad_mC4A57B594B7766DD0ED241D2A8689A50526FD03E (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6557EC8E9D1D8936336FB2A28A8AA52F6BA6099);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerLoad Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA6557EC8E9D1D8936336FB2A28A8AA52F6BA6099, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::OnBannerFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_OnBannerFail_m57153C5FC83352CB677BEDFE2337D70FD383F0DE (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AF64958C9C7EE71FAC114ADCD464C016A411A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerFail Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6AF64958C9C7EE71FAC114ADCD464C016A411A44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::OnBannerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample_OnBannerClick_m0ECD3AFADB5FB41109145591F735528B6EF8A978 (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB51A3DEDC97CE1544DD918BA58C39AA71657E4E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerClick Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB51A3DEDC97CE1544DD918BA58C39AA71657E4E7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BannerAdSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdSample__ctor_mC3937966D1A6BF73CB3753D1BC1D626AF8583AE5 (BannerAdSample_t649F1042BD51C8D2BC436762FF665540B3DB3D3D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadBanner::_bidmadNewInstanceBanner(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadNewInstanceBanner_m665F8E33BF067417FA0834CB583883A398A9580C (String_t* ___zoneId0, float ____x1, float ____y2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadNewInstanceBanner)(____zoneId0_marshaled, ____x1, ____y2);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadNewInstanceBannerAutoCenter(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadNewInstanceBannerAutoCenter_mC57E1F42C1DF7A4FE1C57C214E31A02A1F20246C (String_t* ___zoneId0, float ____y1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadNewInstanceBannerAutoCenter)(____zoneId0_marshaled, ____y1);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadSetRefreshInterval(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadSetRefreshInterval_m3094753334AB84BA90FC27DFE1A1CD50529C9935 (String_t* ___zoneId0, int32_t ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetRefreshInterval)(____zoneId0_marshaled, ___time1);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadLoadBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadLoadBanner_m05223AE148EFE60AE354B41E994CE447A0C8F6A9 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadLoadBanner)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadRemoveBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadRemoveBanner_m2671AB12AADC741FD864C3E9140FD76D736BD5E7 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadRemoveBanner)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadHideBannerView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadHideBannerView_m49F086F1A036D1365021EEE88313B4C35038E582 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadHideBannerView)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::_bidmadShowBannerView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__bidmadShowBannerView_m9AA7866AFC51139FC28FBD0528D6790BDA523CA5 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadShowBannerView)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadBanner::.ctor(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__ctor_m7A93F039154C99E03A11EC8B6D6B374740A824B0 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, String_t* ___zoneId0, float ____y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mZoneId = "";
		__this->set_mZoneId_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BidmadBanner(string zoneId, float _y)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mZoneId = zoneId;
		String_t* L_0 = ___zoneId0;
		__this->set_mZoneId_0(L_0);
		// _bidmadNewInstanceBannerAutoCenter(zoneId, _y);
		String_t* L_1 = ___zoneId0;
		float L_2 = ____y1;
		BidmadBanner__bidmadNewInstanceBannerAutoCenter_mC57E1F42C1DF7A4FE1C57C214E31A02A1F20246C(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner__ctor_mF0FCEA18438505A95E67675F83EFA9150A25ABDE (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, String_t* ___zoneId0, float ____x1, float ____y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mZoneId = "";
		__this->set_mZoneId_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BidmadBanner(string zoneId, float _x, float _y)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mZoneId = zoneId;
		String_t* L_0 = ___zoneId0;
		__this->set_mZoneId_0(L_0);
		// setBannerPosition = true;
		__this->set_setBannerPosition_1((bool)1);
		// _bidmadNewInstanceBanner(zoneId, _x, _y);
		String_t* L_1 = ___zoneId0;
		float L_2 = ____x1;
		float L_3 = ____y2;
		BidmadBanner__bidmadNewInstanceBanner_m665F8E33BF067417FA0834CB583883A398A9580C(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_getInstance_mE1FA84B04040E8733D4A0833A580E20B9CBA1484 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadBanner::setRefreshInterval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setRefreshInterval_mFFF84FB95CC7F94F6E515D21A04E48C0F781FA6B (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	{
		// _bidmadSetRefreshInterval(mZoneId, time);
		String_t* L_0 = __this->get_mZoneId_0();
		int32_t L_1 = ___time0;
		BidmadBanner__bidmadSetRefreshInterval_m3094753334AB84BA90FC27DFE1A1CD50529C9935(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::removeBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_removeBanner_mBE5F068DDAB3409133B2777378BC75024EE5C9CD (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadRemoveBanner(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadBanner__bidmadRemoveBanner_m2671AB12AADC741FD864C3E9140FD76D736BD5E7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_load_mF3DDE74572B669C0E4FA34F894A9F3F3089B764D (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadLoadBanner(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadBanner__bidmadLoadBanner_m05223AE148EFE60AE354B41E994CE447A0C8F6A9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::pauseBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_pauseBanner_mB7E8CA29C06E034C9D0140B7BF2E08C7FDC932DD (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadBanner::hideBannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_hideBannerView_m1EE2C00F01A0A4FBAC709D0799A771320763575E (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadHideBannerView(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadBanner__bidmadHideBannerView_m49F086F1A036D1365021EEE88313B4C35038E582(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::showBannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_showBannerView_m9D689013234CC169622165A16FE493AA0F018675 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadShowBannerView(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadBanner__bidmadShowBannerView_m9AA7866AFC51139FC28FBD0528D6790BDA523CA5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadBanner::resumeBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_resumeBanner_m42902BB38A4B763907321992AA83239857954A33 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadBanner::setBannerLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerLoadCallback_m0146ABD2639BF4B12E8FC2CA61AC7035027E1037 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicBannerLoad.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerLoad_4();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicBannerLoad.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerLoad_4();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicBannerLoad.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerLoad_4();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadBanner::setBannerFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerFailCallback_mE6AA0EB1600E9929A2ADB08079EFFD1B63662CA3 (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicBannerFail.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerFail_5();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicBannerFail.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerFail_5();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicBannerFail.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerFail_5();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadBanner::setBannerClickCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadBanner_setBannerClickCallback_m83106F4FEE6E05F8831CCC6B4302D0BEA671CF8F (BidmadBanner_tC9CD26B063634C64C8C63977A8A156B7E1B90371 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicBannerClick.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerClick_6();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicBannerClick.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerClick_6();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicBannerClick.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerClick_6();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadCommon::_bidmadSetDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetDebug_mADC35E1917F0A5453CC99BCAF5EBB2707E707414 (bool ___isDebug0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetDebug)(static_cast<int32_t>(___isDebug0));

}
// System.Void BidmadCommon::_bidmadSetGgTestDeviceid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetGgTestDeviceid_m93E9191EF2F365D1EF74AC0B56DD6361C37D9636 (String_t* ___deviceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___deviceId0' to native representation
	char* ____deviceId0_marshaled = NULL;
	____deviceId0_marshaled = il2cpp_codegen_marshal_string(___deviceId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetGgTestDeviceid)(____deviceId0_marshaled);

	// Marshaling cleanup of parameter '___deviceId0' native representation
	il2cpp_codegen_marshal_free(____deviceId0_marshaled);
	____deviceId0_marshaled = NULL;

}
// System.Void BidmadCommon::_bidmadSetGDPRSetting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetGDPRSetting_mC0C00CFDF88FB2CF491ECFC1912DBF671E298C0B (bool ___consent0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetGDPRSetting)(static_cast<int32_t>(___consent0));

}
// System.Void BidmadCommon::_bidmadSetUseArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetUseArea_mAEB7C1CF65D40A0532006E0FF7F4C1539A8B41B9 (bool ___useArea0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetUseArea)(static_cast<int32_t>(___useArea0));

}
// System.Int32 BidmadCommon::_bidmadGetGdprConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadCommon__bidmadGetGdprConsent_m1513D7B170F69A3CE98D729DE86FDEBF9950FABB (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadGetGdprConsent)();

	return returnValue;
}
// System.Void BidmadCommon::_bidmadReqAdTrackingAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadReqAdTrackingAuthorization_m31825F4D95E945FC83D04A0A2EE3DC12E5858742 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadReqAdTrackingAuthorization)();

}
// System.Void BidmadCommon::_bidmadSetAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__bidmadSetAdvertiserTrackingEnabled_mEC7E2219FF989CA06BE429337F9A8E5357BEBABB (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetAdvertiserTrackingEnabled)(static_cast<int32_t>(___enable0));

}
// System.Boolean BidmadCommon::_bidmadGetAdvertiserTrackingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadCommon__bidmadGetAdvertiserTrackingEnabled_m5187C70F399AB3E3539D4028009E1906BCA6609C (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadGetAdvertiserTrackingEnabled)();

	return static_cast<bool>(returnValue);
}
// System.Void BidmadCommon::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F (bool ___isDebug0, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// _bidmadSetDebug(isDebug);
		bool L_1 = ___isDebug0;
		BidmadCommon__bidmadSetDebug_mADC35E1917F0A5453CC99BCAF5EBB2707E707414(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadCommon::setGgTestDeviceid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setGgTestDeviceid_mDC52CF577E3DF6175DF79687F36F99BD495FD953 (String_t* ___deviceId0, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// _bidmadSetGgTestDeviceid(deviceId);
		String_t* L_1 = ___deviceId0;
		BidmadCommon__bidmadSetGgTestDeviceid_m93E9191EF2F365D1EF74AC0B56DD6361C37D9636(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadCommon::setGdprConsent(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setGdprConsent_m4E989BAAC4B5AF9BC89ECBEB4E9834960CDB7C72 (bool ___consent0, bool ___useArea1, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0014;
		}
	}
	{
		// _bidmadSetGDPRSetting(consent);
		bool L_1 = ___consent0;
		BidmadCommon__bidmadSetGDPRSetting_mC0C00CFDF88FB2CF491ECFC1912DBF671E298C0B(L_1, /*hidden argument*/NULL);
		// _bidmadSetUseArea(useArea);
		bool L_2 = ___useArea1;
		BidmadCommon__bidmadSetUseArea_mAEB7C1CF65D40A0532006E0FF7F4C1539A8B41B9(L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 BidmadCommon::getGdprConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadCommon_getGdprConsent_mD81A582ECB8FCD2427BA992B8D6BA30BA9AFB1F8 (bool ___useArea0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int result = 999;
		V_0 = ((int32_t)999);
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		// result = _bidmadGetGdprConsent();
		int32_t L_1;
		L_1 = BidmadCommon__bidmadGetGdprConsent_m1513D7B170F69A3CE98D729DE86FDEBF9950FABB(/*hidden argument*/NULL);
		V_0 = L_1;
		// return result;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0016:
	{
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.String BidmadCommon::getPRIVACYURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BidmadCommon_getPRIVACYURL_mCA6505D0E1C3AB5B3088A39DFB7FFE7E1879ACE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		// return result;
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void BidmadCommon::reqAdTrackingAuthorization(System.Action`1<BidmadTrackingAuthorizationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_reqAdTrackingAuthorization_mCBCC75AA6EE7A237B22036D341AC094ED164F068 (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}
	{
		// _bidmadReqAdTrackingAuthorization();
		BidmadCommon__bidmadReqAdTrackingAuthorization_m31825F4D95E945FC83D04A0A2EE3DC12E5858742(/*hidden argument*/NULL);
		// BidmadManager.adTrackingAuthResponse = callback;
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_adTrackingAuthResponse_23(L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BidmadCommon::setAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon_setAdvertiserTrackingEnabled_m12C20AA23C19EDA8718C7E075443CE7180E8D847 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// _bidmadSetAdvertiserTrackingEnabled(enable);
		bool L_1 = ___enable0;
		BidmadCommon__bidmadSetAdvertiserTrackingEnabled_mEC7E2219FF989CA06BE429337F9A8E5357BEBABB(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean BidmadCommon::getAdvertiserTrackingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadCommon_getAdvertiserTrackingEnabled_m2940A97F1584E8BE507FB3256281448DDA098919 (const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// return _bidmadGetAdvertiserTrackingEnabled();
		bool L_1;
		L_1 = BidmadCommon__bidmadGetAdvertiserTrackingEnabled_m5187C70F399AB3E3539D4028009E1906BCA6609C(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void BidmadCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadCommon__ctor_m62037991FFC2BE9668D03A5E73F13F9E7CE70434 (BidmadCommon_t9D1AB35AFA3DF19EF05BDB49CF2DC3EAEBC9E065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5866790B3FDB3A265FC4204068C20E90D744D524);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string UNITY_PLUGIN_VERSION = "2.8.0";
		__this->set_UNITY_PLUGIN_VERSION_0(_stringLiteral5866790B3FDB3A265FC4204068C20E90D744D524);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadGoogleGDPR::_bidmadSetDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadSetDebug_mADE8D37EA8466DE11D6CE39094F8986C95AB46DA (bool ___isDebug0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadSetDebug)(static_cast<int32_t>(___isDebug0));

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleNewInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleNewInstance_mC8DE7C2669076A2AD6A7C95580B640E097F26AA5 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleNewInstance)();

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetListener_m062E07F599703655E53B40C91951ED48B08B40AB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleSetListener)();

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetDebug(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetDebug_m12DCFCB6D5B94746449CAD68E57A9DB84A4713C1 (String_t* ___testDeviceId0, bool ___isTestEurope1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___testDeviceId0' to native representation
	char* ____testDeviceId0_marshaled = NULL;
	____testDeviceId0_marshaled = il2cpp_codegen_marshal_string(___testDeviceId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleSetDebug)(____testDeviceId0_marshaled, static_cast<int32_t>(___isTestEurope1));

	// Marshaling cleanup of parameter '___testDeviceId0' native representation
	il2cpp_codegen_marshal_free(____testDeviceId0_marshaled);
	____testDeviceId0_marshaled = NULL;

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleRequestConsentInfoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleRequestConsentInfoUpdate_m7AA8562240F2E85051F389C2E994678EA5DA2899 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleRequestConsentInfoUpdate)();

}
// System.Boolean BidmadGoogleGDPR::_bidmadGDPRforGoogleIsConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadGoogleGDPR__bidmadGDPRforGoogleIsConsentFormAvailable_mAB97DDFC29A17E552BA20C8477369B70D9CAAE2F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleIsConsentFormAvailable)();

	return static_cast<bool>(returnValue);
}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleLoadForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleLoadForm_mFB289A3B10520CE31B1C3014F8948C790580A290 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleLoadForm)();

}
// System.Int32 BidmadGoogleGDPR::_bidmadGDPRforGoogleGetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadGoogleGDPR__bidmadGDPRforGoogleGetConsentStatus_mED65CCB8D7121EF1491A6C288A28608FBF9A9D16 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleGetConsentStatus)();

	return returnValue;
}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleReset_mA821D0E29AA07476E947A6A4F78AD45830115B8F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleReset)();

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleSetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleSetDelegate_m69F73D3143127BCB73B79B604AAE273389EE78AD (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleSetDelegate)();

}
// System.Void BidmadGoogleGDPR::_bidmadGDPRforGoogleShowForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__bidmadGDPRforGoogleShowForm_m5FF4D8182F5C6F2F0A39E2D564D15DD2BA172FA5 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadGDPRforGoogleShowForm)();

}
// System.Void BidmadGoogleGDPR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR__ctor_mABA0D8CFFC4451FEC9E417525F6EEC7F0B76A237 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	{
		// public BidmadGoogleGDPR()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		// _bidmadGDPRforGoogleNewInstance();
		BidmadGoogleGDPR__bidmadGDPRforGoogleNewInstance_mC8DE7C2669076A2AD6A7C95580B640E097F26AA5(/*hidden argument*/NULL);
		// _bidmadGDPRforGoogleSetListener();
		BidmadGoogleGDPR__bidmadGDPRforGoogleSetListener_m062E07F599703655E53B40C91951ED48B08B40AB(/*hidden argument*/NULL);
		// _bidmadGDPRforGoogleSetDelegate();
		BidmadGoogleGDPR__bidmadGDPRforGoogleSetDelegate_m69F73D3143127BCB73B79B604AAE273389EE78AD(/*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setDebug(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setDebug_m50D9DC406E376F0BBA10E2841F924362B5C8BE90 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, String_t* ___testDeviceId0, bool ___isEEA1, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000f;
		}
	}
	{
		// _bidmadGDPRforGoogleSetDebug(testDeviceId, isEEA);
		String_t* L_1 = ___testDeviceId0;
		bool L_2 = ___isEEA1;
		BidmadGoogleGDPR__bidmadGDPRforGoogleSetDebug_m12DCFCB6D5B94746449CAD68E57A9DB84A4713C1(L_1, L_2, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean BidmadGoogleGDPR::isConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadGoogleGDPR_isConsentFormAvailable_m915E7C75BA828445336321EE42ED79524CC3FEED (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0010;
		}
	}
	{
		// result = _bidmadGDPRforGoogleIsConsentFormAvailable();
		bool L_1;
		L_1 = BidmadGoogleGDPR__bidmadGDPRforGoogleIsConsentFormAvailable_mAB97DDFC29A17E552BA20C8477369B70D9CAAE2F(/*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0010:
	{
		// return result;
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 BidmadGoogleGDPR::getConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BidmadGoogleGDPR_getConsentStatus_m06014526AD47246B71325E4B7C48D89382978C0B (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int result = 0;
		V_0 = 0;
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0010;
		}
	}
	{
		// result = _bidmadGDPRforGoogleGetConsentStatus();
		int32_t L_1;
		L_1 = BidmadGoogleGDPR__bidmadGDPRforGoogleGetConsentStatus_mED65CCB8D7121EF1491A6C288A28608FBF9A9D16(/*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0010:
	{
		// return result;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void BidmadGoogleGDPR::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_reset_mBBA632CDDAA62006F54D7D91789415978A069709 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000d;
		}
	}
	{
		// _bidmadGDPRforGoogleReset();
		BidmadGoogleGDPR__bidmadGDPRforGoogleReset_mA821D0E29AA07476E947A6A4F78AD45830115B8F(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::requestConsentInfoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_requestConsentInfoUpdate_m72C6F6C5107B1D45DCDBDFB19313DA3E9D8E1AF1 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000d;
		}
	}
	{
		// _bidmadGDPRforGoogleRequestConsentInfoUpdate();
		BidmadGoogleGDPR__bidmadGDPRforGoogleRequestConsentInfoUpdate_m7AA8562240F2E85051F389C2E994678EA5DA2899(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::loadForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_loadForm_m9584205C03B9AFF87C5A5C91DA95DFB4BBC448BF (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000d;
		}
	}
	{
		// _bidmadGDPRforGoogleLoadForm();
		BidmadGoogleGDPR__bidmadGDPRforGoogleLoadForm_mFB289A3B10520CE31B1C3014F8948C790580A290(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::showForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_showForm_m9D61A67198F2475B02E72A38B0E726BBE01C2ED7 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000d;
		}
	}
	{
		// _bidmadGDPRforGoogleShowForm();
		BidmadGoogleGDPR__bidmadGDPRforGoogleShowForm_m5FF4D8182F5C6F2F0A39E2D564D15DD2BA172FA5(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setConsentInfoUpdateSuccessCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentInfoUpdateSuccessCallback_m1F475CD106C68C9F8D05831E6258C130953B600D (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// BidmadManager.consentInfoUpdateSuccess = callback;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_consentInfoUpdateSuccess_24(L_1);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setConsentInfoUpdateFailureCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentInfoUpdateFailureCallback_m8175A5D8D04A04B6C9F956788E1F8ACF90238C8C (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// BidmadManager.consentInfoUpdateFailure = callback;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_consentInfoUpdateFailure_25(L_1);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setConsentFormLoadSuccessCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormLoadSuccessCallback_mCC480DCB897E48F2B2EFD36665AC05C560FDADC4 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// BidmadManager.consentFormLoadSuccess = callback;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_consentFormLoadSuccess_26(L_1);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setConsentFormLoadFailureCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormLoadFailureCallback_m2D11A6140C9A2012246A509E5A141242BABF1597 (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// BidmadManager.consentFormLoadFailure = callback;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_consentFormLoadFailure_27(L_1);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BidmadGoogleGDPR::setConsentFormDismissedCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadGoogleGDPR_setConsentFormDismissedCallback_m285404D32B402D8C3DE6C7A6A327933E725B196A (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_000e;
		}
	}
	{
		// BidmadManager.consentFormDismissed = callback;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_consentFormDismissed_28(L_1);
	}

IL_000e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadInterstitial::_bidmadNewInstanceInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadNewInstanceInterstitial_mA6B717CC379B8C0A888A0EF4A714B59ADB090843 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadNewInstanceInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadInterstitial::_bidmadLoadInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadLoadInterstitial_mB037C3D97672D04531488ADC7CA7A5504E0A7746 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadLoadInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadInterstitial::_bidmadShowInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__bidmadShowInterstitial_m260EEBC1B257D0A580847CF55D11907DF1BCCF84 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadShowInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Boolean BidmadInterstitial::_bidmadIsLoadedInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadInterstitial__bidmadIsLoadedInterstitial_mC4C5EED21E29C77A18C04761D66A1764430E27AA (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadIsLoadedInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void BidmadInterstitial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial__ctor_m9109914B6B3069693795EBD4B830AE74512D0391 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mZoneId = "";
		__this->set_mZoneId_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BidmadInterstitial(string zoneId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mZoneId = zoneId;
		String_t* L_0 = ___zoneId0;
		__this->set_mZoneId_0(L_0);
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0026;
		}
	}
	{
		// _bidmadNewInstanceInterstitial(zoneId);
		String_t* L_2 = ___zoneId0;
		BidmadInterstitial__bidmadNewInstanceInterstitial_mA6B717CC379B8C0A888A0EF4A714B59ADB090843(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void BidmadInterstitial::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_getInstance_m3B3820CB7C61A7FF5FE6AA27D1C5F499278FE89D (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadInterstitial::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_load_m7CAF6D5F5D6D886967102682A495CE2C6ACEAC63 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}
	{
		// _bidmadLoadInterstitial(mZoneId);
		String_t* L_1 = __this->get_mZoneId_0();
		BidmadInterstitial__bidmadLoadInterstitial_mB037C3D97672D04531488ADC7CA7A5504E0A7746(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BidmadInterstitial::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_show_m731AE31A4754C69FBAC71A37577769EEB6409422 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}
	{
		// _bidmadShowInterstitial(mZoneId);
		String_t* L_1 = __this->get_mZoneId_0();
		BidmadInterstitial__bidmadShowInterstitial_m260EEBC1B257D0A580847CF55D11907DF1BCCF84(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean BidmadInterstitial::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadInterstitial_isLoaded_mA30EA4EBB634243D4195DE477A80B48637455B7C (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, const RuntimeMethod* method)
{
	{
		// result = _bidmadIsLoadedInterstitial(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		bool L_1;
		L_1 = BidmadInterstitial__bidmadIsLoadedInterstitial_mC4C5EED21E29C77A18C04761D66A1764430E27AA(L_0, /*hidden argument*/NULL);
		// return result;
		return L_1;
	}
}
// System.Void BidmadInterstitial::setInterstitialLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialLoadCallback_m181AAA28D5840DCD3C76F315E37E654B77BD5A85 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicInterstitialLoad.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialLoad_7();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicInterstitialLoad.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialLoad_7();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicInterstitialLoad.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialLoad_7();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadInterstitial::setInterstitialShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialShowCallback_m9F8C64C7ED11ACBF6D899B5510A41EC355493621 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicInterstitialShow.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialShow_8();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicInterstitialShow.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialShow_8();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicInterstitialShow.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialShow_8();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadInterstitial::setInterstitialFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialFailCallback_m38FA765FD37D0E5DDFD67D76944B7B7189C1C8A2 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicInterstitialFail.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialFail_9();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicInterstitialFail.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialFail_9();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicInterstitialFail.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialFail_9();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadInterstitial::setInterstitialCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadInterstitial_setInterstitialCloseCallback_m5CAC78B2E4FF8D1E3E2891A5F28D19AD89426456 (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicInterstitialClose.ContainsKey(mZoneId))
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialClose_10();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicInterstitialClose.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialClose_10();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicInterstitialClose.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialClose_10();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadManager::OnBannerLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnBannerLoad_m93155EDCE6065B760DF7C2B94F037003EA8C6AB3 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA44ED6F3394CAAA0DBCBBA5FAF98B6DB3BCF59C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerLoaded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDA44ED6F3394CAAA0DBCBBA5FAF98B6DB3BCF59C, /*hidden argument*/NULL);
		// if(dicBannerLoad.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerLoad_4();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onBannerLoad = dicBannerLoad[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerLoad_4();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onBannerLoad();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnBannerFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnBannerFail_mFDBF75D82E1726DE4C276C158C6F90085BB24E52 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9315C2E4928F127468946E8C1322471F11A08F5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerFailed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9315C2E4928F127468946E8C1322471F11A08F5A, /*hidden argument*/NULL);
		// if(dicBannerFail.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerFail_5();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onBannerFail = dicBannerFail[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerFail_5();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onBannerFail();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnBannerClick_m9971F88B7A16E01268DF8247C1945898DEFBE7B6 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F3BE75A8FCC5EEEE48EAA07B6593D1F64E786C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnBannerClicked");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA4F3BE75A8FCC5EEEE48EAA07B6593D1F64E786C, /*hidden argument*/NULL);
		// if(dicBannerClick.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerClick_6();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onBannerClick = dicBannerClick[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicBannerClick_6();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onBannerClick();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnInterstitialLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnInterstitialLoad_m63C79D9AC6023CA622391748FF6EDD0C5A158883 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6170157DDA63A04D50CCDDC7537DF6BB420F3FF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialLoad");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6170157DDA63A04D50CCDDC7537DF6BB420F3FF3, /*hidden argument*/NULL);
		// if(dicInterstitialLoad.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialLoad_7();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onInterstitialLoad = dicInterstitialLoad[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialLoad_7();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onInterstitialLoad();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnInterstitialShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnInterstitialShow_m98CB6C88C17376BA6ED3C8813F3538C5B863B622 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C150048EB3366E6EF1D434A1004C9EB8308606B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialShow");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5C150048EB3366E6EF1D434A1004C9EB8308606B, /*hidden argument*/NULL);
		// if(dicInterstitialShow.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialShow_8();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Action onInterstitialShow = dicInterstitialShow[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialShow_8();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onInterstitialShow();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		// BidmadInterstitial interstitial = new BidmadInterstitial(zoneId);
		String_t* L_6 = ___zoneId0;
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_7 = (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD *)il2cpp_codegen_object_new(BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD_il2cpp_TypeInfo_var);
		BidmadInterstitial__ctor_m9109914B6B3069693795EBD4B830AE74512D0391(L_7, L_6, /*hidden argument*/NULL);
		// interstitial.load();
		NullCheck(L_7);
		BidmadInterstitial_load_m7CAF6D5F5D6D886967102682A495CE2C6ACEAC63(L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnInterstitialFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnInterstitialFail_m5D8BBFE128E83D86DD096C240A6FEF904CA37C80 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B186EB1DF4D21AB094BA0C504463BE9BEFC9A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialLoadFail");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE8B186EB1DF4D21AB094BA0C504463BE9BEFC9A9, /*hidden argument*/NULL);
		// if(dicInterstitialFail.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialFail_9();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onInterstitialFail = dicInterstitialFail[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialFail_9();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onInterstitialFail();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnInterstitialClose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnInterstitialClose_m9CC423DE2B2ED1F35041D8882BA5F4522118FEA2 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7133EC90D376737BBD21D781F7131C0314CAC9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialClose");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB7133EC90D376737BBD21D781F7131C0314CAC9D, /*hidden argument*/NULL);
		// if(dicInterstitialClose.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialClose_10();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onInterstitialClose = dicInterstitialClose[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicInterstitialClose_10();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onInterstitialClose();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardLoad_mC67E5EB1B0EB72AE05FCB52AC71C5888377177C0 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4CA64C78C7F21F918529335AF0B74855B01C8DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardLoad");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF4CA64C78C7F21F918529335AF0B74855B01C8DF, /*hidden argument*/NULL);
		// if(dicRewardLoad.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardLoad_11();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardLoad = dicRewardLoad[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardLoad_11();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardLoad();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardShow_mF74D37631A40060172FE81AD35714B4C68D620C3 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7A800F0260D3F1E076319D392C04655813AC1BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardShow");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE7A800F0260D3F1E076319D392C04655813AC1BC, /*hidden argument*/NULL);
		// if(dicRewardShow.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardShow_12();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Action onRewardShow = dicRewardShow[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardShow_12();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardShow();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		// BidmadReward reward = new BidmadReward(zoneId);
		String_t* L_6 = ___zoneId0;
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_7 = (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 *)il2cpp_codegen_object_new(BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2_il2cpp_TypeInfo_var);
		BidmadReward__ctor_mDC3FAAB42909DE9BE02536EB28503D8357D980E9(L_7, L_6, /*hidden argument*/NULL);
		// reward.load();
		NullCheck(L_7);
		BidmadReward_load_mAD70D011B954975A8281A6F5E43AAAD5DAA067C7(L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardFail_m544FFF32576518E8EF60C853672261B70ABA8660 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B19279223C818F83A5DB20A828E1565CED7B246);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardFail");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0B19279223C818F83A5DB20A828E1565CED7B246, /*hidden argument*/NULL);
		// if(dicRewardFail.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardFail_13();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardFail = dicRewardFail[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardFail_13();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardFail();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardComplete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardComplete_mC0414B7370AFDF9F40C3EAFC406DBE0646B677D2 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A1C9EF48507F72CB993BDCCEE02B4B3A60703AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardComplete");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1A1C9EF48507F72CB993BDCCEE02B4B3A60703AB, /*hidden argument*/NULL);
		// if(dicRewardComplete.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardComplete_14();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardComplete = dicRewardComplete[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardComplete_14();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardComplete();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardSkip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardSkip_mC32282744267E3D151A922B673FC45342B78A98B (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24025CD93FD3CEB6A729C721539B9574CEABFBCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardSkip");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral24025CD93FD3CEB6A729C721539B9574CEABFBCE, /*hidden argument*/NULL);
		// if(dicRewardSkip.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardSkip_15();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardSkip = dicRewardSkip[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardSkip_15();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardSkip();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardClose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardClose_m60171000477C24C53AF81ED077B9D304BDF564A6 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2864409BD8A8C27E92D0BAD3800CFC9660F890C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardClose");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2864409BD8A8C27E92D0BAD3800CFC9660F890C1, /*hidden argument*/NULL);
		// if(dicRewardClose.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardClose_16();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardClose = dicRewardClose[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardClose_16();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardClose();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialLoad_m94507F9781202402BAC6FA21C26938F78390A1D9 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03CDFFAEDC7873DFA717776AD675DE5118B7DF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialLoad");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD03CDFFAEDC7873DFA717776AD675DE5118B7DF0, /*hidden argument*/NULL);
		// if(dicRewardInterstitialLoad.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialLoad_17();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardInterstitialLoad = dicRewardInterstitialLoad[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialLoad_17();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialLoad();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialShow_m7F11EF3CDBD4F23CCAC15AC8E4342717CD0F12BE (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6074C66D052C813BFEEF4376C2AF3397F1B1327F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialShow");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6074C66D052C813BFEEF4376C2AF3397F1B1327F, /*hidden argument*/NULL);
		// if(dicRewardInterstitialShow.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialShow_18();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Action onRewardInterstitialShow = dicRewardInterstitialShow[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialShow_18();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialShow();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		// BidmadRewardInterstitial rewardInterstitial = new BidmadRewardInterstitial(zoneId);
		String_t* L_6 = ___zoneId0;
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_7 = (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 *)il2cpp_codegen_object_new(BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09_il2cpp_TypeInfo_var);
		BidmadRewardInterstitial__ctor_m75FF6236655C42AC2D846CC4D73C0D389C85EE89(L_7, L_6, /*hidden argument*/NULL);
		// rewardInterstitial.load();
		NullCheck(L_7);
		BidmadRewardInterstitial_load_mA53DDD17FCAEED209770C5C97E51FB3A3B04CE65(L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialFail_m5B3E7B484A92CCF6E3E563C7D865401C879BA94E (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C4C233863228637A411D152040FFD367000AE85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialFail");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0C4C233863228637A411D152040FFD367000AE85, /*hidden argument*/NULL);
		// if(dicRewardInterstitialFail.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialFail_19();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardInterstitialFail = dicRewardInterstitialFail[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialFail_19();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialFail();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialComplete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialComplete_mF3575AD97C5885E264F038B19404FC49D65D8DAA (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB760574A973A28B4006BA75F355496598905F2FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialComplete");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB760574A973A28B4006BA75F355496598905F2FC, /*hidden argument*/NULL);
		// if(dicRewardInterstitialComplete.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialComplete_20();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardInterstitialComplete = dicRewardInterstitialComplete[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialComplete_20();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialComplete();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialSkip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialSkip_mBAA4ECC36D667F59F975A8E7D19B0C071A1BDB6C (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA2C40069F927CA6CD7FD37681C1374C647DC2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialSkip");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDEA2C40069F927CA6CD7FD37681C1374C647DC2F, /*hidden argument*/NULL);
		// if(dicRewardInterstitialSkip.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialSkip_21();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardInterstitialSkip = dicRewardInterstitialSkip[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialSkip_21();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialSkip();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnRewardInterstitialClose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnRewardInterstitialClose_m88C494E46AC6C56D6C6EFE8EEA24BCE2F99624EE (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A1BC9B6F4D773D47AFBD494466181F1C8AB452);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialClose");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral05A1BC9B6F4D773D47AFBD494466181F1C8AB452, /*hidden argument*/NULL);
		// if(dicRewardInterstitialClose.ContainsKey(zoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialClose_22();
		String_t* L_1 = ___zoneId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Action onRewardInterstitialClose = dicRewardInterstitialClose[zoneId];
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialClose_22();
		String_t* L_4 = ___zoneId0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m47F28394A771041333FFD61A6A94367A3BE78D7A_RuntimeMethod_var);
		// onRewardInterstitialClose();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::OnAdTrackingAuthorizationResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_OnAdTrackingAuthorizationResponse_m9792174FA34C6EBA170D13F2C22B8541E4CFBD9F (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___responseCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AE09F5BF78ED1D5D4B893E844C793B6C613615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnAdTrackingAuthorizationResponse");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral03AE09F5BF78ED1D5D4B893E844C793B6C613615, /*hidden argument*/NULL);
		// if (adTrackingAuthResponse != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		if (!L_0)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_1 = ___responseCode0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_2 = ___responseCode0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_4 = ___responseCode0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_6 = ___responseCode0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_8 = ___responseCode0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_10 = ___responseCode0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0096;
	}

IL_005a:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusNotDetermined);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_12 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_12);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_12, 0, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		// break;
		return;
	}

IL_0066:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusRestricted);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_13 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_13);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_13, 1, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		// break;
		return;
	}

IL_0072:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusDenied);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_14 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_14);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_14, 2, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		// break;
		return;
	}

IL_007e:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusAuthorized);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_15 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_15);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_15, 3, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		// break;
		return;
	}

IL_008a:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusLessThaniOS14);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_16 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_16);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_16, 4, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
		// break;
		return;
	}

IL_0096:
	{
		// adTrackingAuthResponse(BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusDenied);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_17 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_adTrackingAuthResponse_23();
		NullCheck(L_17);
		Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C(L_17, 2, /*hidden argument*/Action_1_Invoke_mDC549079F52326EB36DD9CD13A51615B2D372D1C_RuntimeMethod_var);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::onConsentInfoUpdateSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_onConsentInfoUpdateSuccess_m4364DFAA3A15E0EB90132A0CD40AD1CF3B90DD2D (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBBDF4C93003BCA4C572531F2530091D5F2799FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentInfoUpdateSuccess");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEBBDF4C93003BCA4C572531F2530091D5F2799FE, /*hidden argument*/NULL);
		// if (consentInfoUpdateSuccess != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentInfoUpdateSuccess_24();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// consentInfoUpdateSuccess();
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentInfoUpdateSuccess_24();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::onConsentInfoUpdateFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_onConsentInfoUpdateFailure_mFD21F334BC884CB46A638813EC4E08ADA76E08DB (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3C914C989B38D3855714B2A574368F95366638D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentInfoUpdateFailure");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE3C914C989B38D3855714B2A574368F95366638D, /*hidden argument*/NULL);
		// if (consentInfoUpdateFailure != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentInfoUpdateFailure_25();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// consentInfoUpdateFailure(msg);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentInfoUpdateFailure_25();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::onConsentFormLoadSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_onConsentFormLoadSuccess_m55DA7C244B90C0CFEA87A8A5215D961234555DA9 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBEC8782920AD609F7F5BD94E89ED0A3384D52C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentFormLoadSuccess");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9FBEC8782920AD609F7F5BD94E89ED0A3384D52C, /*hidden argument*/NULL);
		// if (consentFormLoadSuccess != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormLoadSuccess_26();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// consentFormLoadSuccess();
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormLoadSuccess_26();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::onConsentFormLoadFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_onConsentFormLoadFailure_mC1B2DBF2BC707D327F7830CE9D8AB8ABD4D500A0 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55642FDA42F7072D59967DFFDF9B7C4779534DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentFormLoadFailure");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral55642FDA42F7072D59967DFFDF9B7C4779534DBD, /*hidden argument*/NULL);
		// if (consentFormLoadFailure != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormLoadFailure_27();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// consentFormLoadFailure(msg);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormLoadFailure_27();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::onConsentFormDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager_onConsentFormDismissed_m93DA87077CED90F886E5C9DB6F9C98F24BB61F99 (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB51A80B4F89A134F79E70DFFED796C38B99B273D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentFormDismissed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB51A80B4F89A134F79E70DFFED796C38B99B273D, /*hidden argument*/NULL);
		// if (consentFormDismissed != null)
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormDismissed_28();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// consentFormDismissed(msg);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_consentFormDismissed_28();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void BidmadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager__ctor_mC58E5D46994108F881CEB453235BC253EE2E94FC (BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BidmadManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadManager__cctor_mE02487989A9AE72C0A68B82F0ECB0D63AFE06AF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<string, Action> dicBannerLoad = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_0, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicBannerLoad_4(L_0);
		// public static Dictionary<string, Action> dicBannerFail = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_1 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_1, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicBannerFail_5(L_1);
		// public static Dictionary<string, Action> dicBannerClick = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_2 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_2, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicBannerClick_6(L_2);
		// public static Dictionary<string, Action> dicInterstitialLoad = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_3, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicInterstitialLoad_7(L_3);
		// public static Dictionary<string, Action> dicInterstitialShow = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_4 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_4, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicInterstitialShow_8(L_4);
		// public static Dictionary<string, Action> dicInterstitialFail = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_5 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_5, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicInterstitialFail_9(L_5);
		// public static Dictionary<string, Action> dicInterstitialClose = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_6, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicInterstitialClose_10(L_6);
		// public static Dictionary<string, Action> dicRewardLoad = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_7 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_7, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardLoad_11(L_7);
		// public static Dictionary<string, Action> dicRewardShow = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_8 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_8, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardShow_12(L_8);
		// public static Dictionary<string, Action> dicRewardFail = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_9 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_9, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardFail_13(L_9);
		// public static Dictionary<string, Action> dicRewardComplete = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_10 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_10, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardComplete_14(L_10);
		// public static Dictionary<string, Action> dicRewardSkip = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_11 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_11, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardSkip_15(L_11);
		// public static Dictionary<string, Action> dicRewardClose = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_12 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_12, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardClose_16(L_12);
		// public static Dictionary<string, Action> dicRewardInterstitialLoad = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_13 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_13, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialLoad_17(L_13);
		// public static Dictionary<string, Action> dicRewardInterstitialShow = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_14 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_14, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialShow_18(L_14);
		// public static Dictionary<string, Action> dicRewardInterstitialFail = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_15 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_15, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialFail_19(L_15);
		// public static Dictionary<string, Action> dicRewardInterstitialComplete = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_16 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_16, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialComplete_20(L_16);
		// public static Dictionary<string, Action> dicRewardInterstitialSkip = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_17 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_17, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialSkip_21(L_17);
		// public static Dictionary<string, Action> dicRewardInterstitialClose = new Dictionary<string, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_18 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_18, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->set_dicRewardInterstitialClose_22(L_18);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadReward::_bidmadNewInstanceReward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadNewInstanceReward_mBDD23BC7127C516FC95AB5A95EE3E1D01FF1CF79 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadNewInstanceReward)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadReward::_bidmadLoadRewardVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadLoadRewardVideo_m19F549098A86E15175C9FD44ED85BAD8D6B5341A (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadLoadRewardVideo)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadReward::_bidmadShowRewardVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__bidmadShowRewardVideo_m530750F9CE5B43450E4AE43FC77DBFE02AAD5271 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadShowRewardVideo)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Boolean BidmadReward::_bidmadIsLoadedReward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadReward__bidmadIsLoadedReward_mAD1C92EA673B8696976A999E3007D4B98DF9DC4C (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadIsLoadedReward)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void BidmadReward::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward__ctor_mDC3FAAB42909DE9BE02536EB28503D8357D980E9 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mZoneId = "";
		__this->set_mZoneId_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BidmadReward(string zoneId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mZoneId = zoneId;
		String_t* L_0 = ___zoneId0;
		__this->set_mZoneId_0(L_0);
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0026;
		}
	}
	{
		// _bidmadNewInstanceReward(zoneId);
		String_t* L_2 = ___zoneId0;
		BidmadReward__bidmadNewInstanceReward_mBDD23BC7127C516FC95AB5A95EE3E1D01FF1CF79(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void BidmadReward::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_getInstance_m20995C13DACEA8BA1587F625F14D7DC9505ADD7B (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadReward::setUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setUserId_mA96F4D0194EBE6346A42EA8005E40BD7F1BB06A7 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadReward::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_load_mAD70D011B954975A8281A6F5E43AAAD5DAA067C7 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}
	{
		// _bidmadLoadRewardVideo(mZoneId);
		String_t* L_1 = __this->get_mZoneId_0();
		BidmadReward__bidmadLoadRewardVideo_m19F549098A86E15175C9FD44ED85BAD8D6B5341A(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BidmadReward::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_show_m123FA678E5B9D49DE31083B0FB201C39997134B9 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}
	{
		// _bidmadShowRewardVideo(mZoneId);
		String_t* L_1 = __this->get_mZoneId_0();
		BidmadReward__bidmadShowRewardVideo_m530750F9CE5B43450E4AE43FC77DBFE02AAD5271(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean BidmadReward::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadReward_isLoaded_m098D49A80271A8D2AC631B0D428DE313FDDB4C41 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, const RuntimeMethod* method)
{
	{
		// result = _bidmadIsLoadedReward(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		bool L_1;
		L_1 = BidmadReward__bidmadIsLoadedReward_mAD1C92EA673B8696976A999E3007D4B98DF9DC4C(L_0, /*hidden argument*/NULL);
		// return result;
		return L_1;
	}
}
// System.Void BidmadReward::setRewardLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardLoadCallback_m017F66CF1C5AD16CE2AD80039C2999E4BC4E4CF8 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardLoad.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardLoad_11();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardLoad.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardLoad_11();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardLoad.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardLoad_11();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadReward::setRewardShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardShowCallback_mA81A32974D7E056249FF9F03EE22DFC9F3ED0D6D (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardShow.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardShow_12();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardShow.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardShow_12();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardShow.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardShow_12();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadReward::setRewardFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardFailCallback_m3E04ACB89548956DCF9373D5BDA6B268C03EB521 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardFail.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardFail_13();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardFail.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardFail_13();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardFail.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardFail_13();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadReward::setRewardCompleteCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardCompleteCallback_m629333D4BDFFDC309521EC3D73D90EEB55154E06 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardComplete.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardComplete_14();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardComplete.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardComplete_14();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardComplete.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardComplete_14();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadReward::setRewardSkipCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardSkipCallback_m3083525DA1E4431D753E8F59BF1F6DE45D3D1F3D (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardSkip.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardSkip_15();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardSkip.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardSkip_15();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardSkip.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardSkip_15();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadReward::setRewardCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadReward_setRewardCloseCallback_mDCB57CD5769F9F9461D6E6A3D22D38C330A72808 (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardClose.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardClose_16();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardClose.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardClose_16();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardClose.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardClose_16();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BidmadRewardInterstitial::_bidmadNewInstanceRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadNewInstanceRewardInterstitial_m64086DA9FCBFDAAA3309D61F025C3A61D3340634 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadNewInstanceRewardInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadRewardInterstitial::_bidmadLoadRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadLoadRewardInterstitial_m8C3D7D48948A51044C080506FCD9E26BA766903F (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadLoadRewardInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Void BidmadRewardInterstitial::_bidmadShowRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__bidmadShowRewardInterstitial_m13610BE9F5F217B76C45B4E38C0B4F44487D4C09 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_bidmadShowRewardInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

}
// System.Boolean BidmadRewardInterstitial::_bidmadIsLoadedRewardInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadRewardInterstitial__bidmadIsLoadedRewardInterstitial_mCDE5E63E53368FD0F4020021802DFFD017B923D1 (String_t* ___zoneId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___zoneId0' to native representation
	char* ____zoneId0_marshaled = NULL;
	____zoneId0_marshaled = il2cpp_codegen_marshal_string(___zoneId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_bidmadIsLoadedRewardInterstitial)(____zoneId0_marshaled);

	// Marshaling cleanup of parameter '___zoneId0' native representation
	il2cpp_codegen_marshal_free(____zoneId0_marshaled);
	____zoneId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void BidmadRewardInterstitial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial__ctor_m75FF6236655C42AC2D846CC4D73C0D389C85EE89 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, String_t* ___zoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mZoneId = "";
		__this->set_mZoneId_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BidmadRewardInterstitial(string zoneId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mZoneId = zoneId;
		String_t* L_0 = ___zoneId0;
		__this->set_mZoneId_0(L_0);
		// _bidmadNewInstanceRewardInterstitial(zoneId);
		String_t* L_1 = ___zoneId0;
		BidmadRewardInterstitial__bidmadNewInstanceRewardInterstitial_m64086DA9FCBFDAAA3309D61F025C3A61D3340634(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_getInstance_mDF7B9B0F862CC8E2D3ABB0396984EC2C470375F7 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setUserId_m63900D5A3D13752D0A6E7610527DA630A8F363D4 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_load_mA53DDD17FCAEED209770C5C97E51FB3A3B04CE65 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadLoadRewardInterstitial(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadRewardInterstitial__bidmadLoadRewardInterstitial_m8C3D7D48948A51044C080506FCD9E26BA766903F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_show_m5624AB3696DE1EEA58F43C7C6D8EF1AA9184B949 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method)
{
	{
		// _bidmadShowRewardInterstitial(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		BidmadRewardInterstitial__bidmadShowRewardInterstitial_m13610BE9F5F217B76C45B4E38C0B4F44487D4C09(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean BidmadRewardInterstitial::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BidmadRewardInterstitial_isLoaded_mAEC2A7A0F4F749DB95AF0DBD141394839DA090A3 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, const RuntimeMethod* method)
{
	{
		// result = _bidmadIsLoadedRewardInterstitial(mZoneId);
		String_t* L_0 = __this->get_mZoneId_0();
		bool L_1;
		L_1 = BidmadRewardInterstitial__bidmadIsLoadedRewardInterstitial_mCDE5E63E53368FD0F4020021802DFFD017B923D1(L_0, /*hidden argument*/NULL);
		// return result;
		return L_1;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialLoadCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialLoadCallback_mCA2BB3902D26CDE356F3B0AFF15A364329AE9AC4 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialLoad.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialLoad_17();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialLoad.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialLoad_17();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialLoad.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialLoad_17();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialShowCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialShowCallback_m2C66EFBEEDB7CB9319F4547EA7D5E110491E0646 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialShow.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialShow_18();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialShow.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialShow_18();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialShow.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialShow_18();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialFailCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialFailCallback_mEF12F8E26A576ECBCFF6C74723CEC1F149501E07 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialFail.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialFail_19();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialFail.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialFail_19();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialFail.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialFail_19();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialCompleteCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialCompleteCallback_m781F124A493310A4C4E599210CBE3E615D8F1DD7 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialComplete.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialComplete_20();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialComplete.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialComplete_20();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialComplete.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialComplete_20();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialSkipCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialSkipCallback_mD7BC3975391904E1B002FBB3F2E3275DA55F8791 (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialSkip.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialSkip_21();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialSkip.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialSkip_21();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialSkip.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialSkip_21();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BidmadRewardInterstitial::setRewardInterstitialCloseCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BidmadRewardInterstitial_setRewardInterstitialCloseCallback_m26F1AB6C22E53D9E2C81A786D0B2BAF28E2837DE (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BidmadManager.dicRewardInterstitialClose.ContainsKey(mZoneId)){
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialClose_22();
		String_t* L_1 = __this->get_mZoneId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB95ECB26F99244EFB742FA5D75927820FC7CF67F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// BidmadManager.dicRewardInterstitialClose.Remove(mZoneId);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_3 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialClose_22();
		String_t* L_4 = __this->get_mZoneId_0();
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m0AEDA9091B290152BF96A58E8605F641ACAACC49_RuntimeMethod_var);
	}

IL_0023:
	{
		// BidmadManager.dicRewardInterstitialClose.Add(mZoneId, callback);
		IL2CPP_RUNTIME_CLASS_INIT(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_6 = ((BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_StaticFields*)il2cpp_codegen_static_fields_for(BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_il2cpp_TypeInfo_var))->get_dicRewardInterstitialClose_22();
		String_t* L_7 = __this->get_mZoneId_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___callback0;
		NullCheck(L_6);
		Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_mB987BDDB7900C7F9FE9558385809E449414FC896_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonEvent::MoveBannerScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent_MoveBannerScene_m1C9B34C2E859D76A01BB53B784F04BE76706466F (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5B5613537BE5C03DA4C92CD4BB4AD82FDEFFE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Banner");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9D5B5613537BE5C03DA4C92CD4BB4AD82FDEFFE4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonEvent::MoveInterstitialScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent_MoveInterstitialScene_mBA1D74BC755A02EB93EC5686DF12CDD7BADF2D24 (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD181BCDB4DA268237D1DAA478781B2556EADA32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Interstitial");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAD181BCDB4DA268237D1DAA478781B2556EADA32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonEvent::MoveRewardScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent_MoveRewardScene_mA86EEEC7866C2827483E1DF808D3C1F0EFE2B58B (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Reward");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonEvent::MoveRewardInterstitialScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent_MoveRewardInterstitialScene_m75E7C76FFA1893FDBA9040756CAA58CE3907180D (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4A161F084A017D5C33465BC870C4B27C40209E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("RewardInterstitial");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDD4A161F084A017D5C33465BC870C4B27C40209E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonEvent::MoveMainScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent_MoveMainScene_mE39FE40CB818F50A672A0C146BECA1EFC643EB18 (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvent__ctor_m3D842BAFB95D1A0CB50ADD14905621E97D7E1B49 (ButtonEvent_t96AF5F2F044A8724A1D996B15B97D80540AE754E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterstitialAdSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_Start_m8055C8A195978323827073FB3A64062FE12C6364 (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	{
		// BidmadCommon.setIsDebug(true);
		BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::LoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_LoadInterstitialAd_m129E0A68655C17EF76A0961C68274A9BBD32CB3C (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_OnInterstitialClose_mDDF35B4FC392FC12B982BCCE69FA1379A6E4349B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_OnInterstitialFail_mD456BFE672F3E455E2FF6D5E0E4E1933EF1D4472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_OnInterstitialLoad_m9D816D139D8CFC818D8CE46E8D36F46668CBDA44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_OnInterstitialShow_m997521B189F03D918BCAF313295FC999612BDED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E36EA1B423B51BEC1D73042E408767C1F26FAB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitial == null)
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_0 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// interstitial = new BidmadInterstitial("228b95a9-6f42-46d8-a40d-60f17f751eb1");
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_1 = (BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD *)il2cpp_codegen_object_new(BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD_il2cpp_TypeInfo_var);
		BidmadInterstitial__ctor_m9109914B6B3069693795EBD4B830AE74512D0391(L_1, _stringLiteral4E36EA1B423B51BEC1D73042E408767C1F26FAB3, /*hidden argument*/NULL);
		((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->set_interstitial_4(L_1);
	}

IL_0016:
	{
		// interstitial.load();
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_2 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		NullCheck(L_2);
		BidmadInterstitial_load_m7CAF6D5F5D6D886967102682A495CE2C6ACEAC63(L_2, /*hidden argument*/NULL);
		// interstitial.setInterstitialLoadCallback(OnInterstitialLoad);
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_3 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)InterstitialAdSample_OnInterstitialLoad_m9D816D139D8CFC818D8CE46E8D36F46668CBDA44_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		BidmadInterstitial_setInterstitialLoadCallback_m181AAA28D5840DCD3C76F315E37E654B77BD5A85(L_3, L_4, /*hidden argument*/NULL);
		// interstitial.setInterstitialShowCallback(OnInterstitialShow);
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_5 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)InterstitialAdSample_OnInterstitialShow_m997521B189F03D918BCAF313295FC999612BDED8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		BidmadInterstitial_setInterstitialShowCallback_m9F8C64C7ED11ACBF6D899B5510A41EC355493621(L_5, L_6, /*hidden argument*/NULL);
		// interstitial.setInterstitialFailCallback(OnInterstitialFail);
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_7 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)InterstitialAdSample_OnInterstitialFail_mD456BFE672F3E455E2FF6D5E0E4E1933EF1D4472_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		BidmadInterstitial_setInterstitialFailCallback_m38FA765FD37D0E5DDFD67D76944B7B7189C1C8A2(L_7, L_8, /*hidden argument*/NULL);
		// interstitial.setInterstitialCloseCallback(OnInterstitialClose);
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_9 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)InterstitialAdSample_OnInterstitialClose_mDDF35B4FC392FC12B982BCCE69FA1379A6E4349B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		BidmadInterstitial_setInterstitialCloseCallback_m5CAC78B2E4FF8D1E3E2891A5F28D19AD89426456(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_ShowInterstitialAd_mB5A027780585DD3F478AA22E38AA25896A8355DF (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitial.isLoaded())
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_0 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = BidmadInterstitial_isLoaded_mA30EA4EBB634243D4195DE477A80B48637455B7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// interstitial.show();
		BidmadInterstitial_t4A3142F8F691BD219945685A3FD0955C232E99FD * L_2 = ((InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0_il2cpp_TypeInfo_var))->get_interstitial_4();
		NullCheck(L_2);
		BidmadInterstitial_show_m731AE31A4754C69FBAC71A37577769EEB6409422(L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void InterstitialAdSample::OnInterstitialLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_OnInterstitialLoad_m9D816D139D8CFC818D8CE46E8D36F46668CBDA44 (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33723F5F8501626F9EB13B1DA54743071BB6140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialLoad Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB33723F5F8501626F9EB13B1DA54743071BB6140, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::OnInterstitialShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_OnInterstitialShow_m997521B189F03D918BCAF313295FC999612BDED8 (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7241DF913F869CD3B80717F9C0802503958B4518);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialShow Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7241DF913F869CD3B80717F9C0802503958B4518, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::OnInterstitialFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_OnInterstitialFail_mD456BFE672F3E455E2FF6D5E0E4E1933EF1D4472 (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE564819543054AA8BE2E9BB83C221128FE042704);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialFail Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE564819543054AA8BE2E9BB83C221128FE042704, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::OnInterstitialClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample_OnInterstitialClose_mDDF35B4FC392FC12B982BCCE69FA1379A6E4349B (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17951AE76D8617B5131E2F94AE738303E0192B17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnInterstitialClose Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral17951AE76D8617B5131E2F94AE738303E0192B17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdSample__ctor_m1376B7644CC56C3C892ECAE73BF3C18456CAA99B (InterstitialAdSample_tC1BCBFEB4417D55520B515829E8530568B92B8B0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardAdSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_Start_m38A2A571E6B40B5498D6704E1B270371CE83CF37 (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	{
		// BidmadCommon.setIsDebug(true);
		BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::LoadRewardAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_LoadRewardAd_mC6886B4CA16C9AE4B58146734847416A1427BDE5 (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardClose_m320B00D8DB7B2E79D094810635BADA94A5EE6CDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardComplete_m01ADC6410AFD68C093C216C3FC2E30D5E984513C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardFail_m09F36C1C9B6FFF62577CF3C2ECBEBDC75A2EFF7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardLoad_mCCEBAC711BCCD1482948D7E37B111B2F2F439E91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardShow_mA01E4E6D83D861686E3AE92181977968558F1B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_OnRewardSkip_m6ABF81B44CEBFD8210D0F440BE34C949D4F9F543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB242FCD2856CB28E8490C34AD470E444D8D78A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reward == null)
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_0 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// reward = new BidmadReward("29e1ef67-98d2-47b3-9fa2-9192327dd75d");
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_1 = (BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 *)il2cpp_codegen_object_new(BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2_il2cpp_TypeInfo_var);
		BidmadReward__ctor_mDC3FAAB42909DE9BE02536EB28503D8357D980E9(L_1, _stringLiteralEBB242FCD2856CB28E8490C34AD470E444D8D78A, /*hidden argument*/NULL);
		((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->set_reward_4(L_1);
	}

IL_0016:
	{
		// reward.load();
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_2 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		NullCheck(L_2);
		BidmadReward_load_mAD70D011B954975A8281A6F5E43AAAD5DAA067C7(L_2, /*hidden argument*/NULL);
		// reward.setRewardLoadCallback(OnRewardLoad);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_3 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardLoad_mCCEBAC711BCCD1482948D7E37B111B2F2F439E91_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		BidmadReward_setRewardLoadCallback_m017F66CF1C5AD16CE2AD80039C2999E4BC4E4CF8(L_3, L_4, /*hidden argument*/NULL);
		// reward.setRewardShowCallback(OnRewardShow);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_5 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardShow_mA01E4E6D83D861686E3AE92181977968558F1B6A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		BidmadReward_setRewardShowCallback_mA81A32974D7E056249FF9F03EE22DFC9F3ED0D6D(L_5, L_6, /*hidden argument*/NULL);
		// reward.setRewardFailCallback(OnRewardFail);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_7 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardFail_m09F36C1C9B6FFF62577CF3C2ECBEBDC75A2EFF7F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		BidmadReward_setRewardFailCallback_m3E04ACB89548956DCF9373D5BDA6B268C03EB521(L_7, L_8, /*hidden argument*/NULL);
		// reward.setRewardCompleteCallback(OnRewardComplete);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_9 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardComplete_m01ADC6410AFD68C093C216C3FC2E30D5E984513C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		BidmadReward_setRewardCompleteCallback_m629333D4BDFFDC309521EC3D73D90EEB55154E06(L_9, L_10, /*hidden argument*/NULL);
		// reward.setRewardSkipCallback(OnRewardSkip);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_11 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_12, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardSkip_m6ABF81B44CEBFD8210D0F440BE34C949D4F9F543_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		BidmadReward_setRewardSkipCallback_m3083525DA1E4431D753E8F59BF1F6DE45D3D1F3D(L_11, L_12, /*hidden argument*/NULL);
		// reward.setRewardCloseCallback(OnRewardClose);
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_13 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, __this, (intptr_t)((intptr_t)RewardAdSample_OnRewardClose_m320B00D8DB7B2E79D094810635BADA94A5EE6CDC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		BidmadReward_setRewardCloseCallback_mDCB57CD5769F9F9461D6E6A3D22D38C330A72808(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::ShowRewardAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_ShowRewardAd_mCE36747EAD12526687113AFB586DED6B4FA8D2C0 (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reward.isLoaded())
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_0 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = BidmadReward_isLoaded_m098D49A80271A8D2AC631B0D428DE313FDDB4C41(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// reward.show();
		BidmadReward_t396CA17990C64714588D63EF8ECAC2D8421A84C2 * L_2 = ((RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_StaticFields*)il2cpp_codegen_static_fields_for(RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C_il2cpp_TypeInfo_var))->get_reward_4();
		NullCheck(L_2);
		BidmadReward_show_m123FA678E5B9D49DE31083B0FB201C39997134B9(L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardLoad_mCCEBAC711BCCD1482948D7E37B111B2F2F439E91 (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0AAC6259BF93C20CDC4C54DCF9D4E82C94708D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardLoad Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC0AAC6259BF93C20CDC4C54DCF9D4E82C94708D7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardShow_mA01E4E6D83D861686E3AE92181977968558F1B6A (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE05993E316009A93599B7DBB6920F3B936967439);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardShow Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE05993E316009A93599B7DBB6920F3B936967439, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardFail_m09F36C1C9B6FFF62577CF3C2ECBEBDC75A2EFF7F (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3704CC7D744B262BB348DCDCECAC7F5366876CE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardFail Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3704CC7D744B262BB348DCDCECAC7F5366876CE3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardComplete_m01ADC6410AFD68C093C216C3FC2E30D5E984513C (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7A432E3F116ADBDFB0A250D7C0B832B9DD7249);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardComplete Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralED7A432E3F116ADBDFB0A250D7C0B832B9DD7249, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardSkip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardSkip_m6ABF81B44CEBFD8210D0F440BE34C949D4F9F543 (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C6D746CA396504489E13936C3805A6B5665355);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardSkip Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral40C6D746CA396504489E13936C3805A6B5665355, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::OnRewardClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample_OnRewardClose_m320B00D8DB7B2E79D094810635BADA94A5EE6CDC (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E74588B5948ED26C0BB98DED627472119DD29A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardClose Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3E74588B5948ED26C0BB98DED627472119DD29A4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardAdSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdSample__ctor_m08CE509A45A4976EF9DDA4A80DCF92EF8463227F (RewardAdSample_t6EFCD9EA008334BC3F8CAB92C4C6C9B07BC4CA2C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardInterstitialAdPopupSample::add_positiveCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_add_positiveCallBack_m3B65AFD1C43EA9D9D588058F33A1B072858CEEB0 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_1 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_2 = NULL;
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_positiveCallBack_7();
		V_0 = L_0;
	}

IL_0007:
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = V_0;
		V_1 = L_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_2 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)CastclassSealed((RuntimeObject*)L_4, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var));
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** L_5 = __this->get_address_of_positiveCallBack_7();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_6 = V_2;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_7 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *>((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 **)L_5, L_6, L_7);
		V_0 = L_8;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_9 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_9) == ((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::remove_positiveCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_remove_positiveCallBack_mF3509F55F16251FA009B71FF5365E9031E0AC2B1 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_1 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_2 = NULL;
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_positiveCallBack_7();
		V_0 = L_0;
	}

IL_0007:
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = V_0;
		V_1 = L_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_2 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)CastclassSealed((RuntimeObject*)L_4, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var));
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** L_5 = __this->get_address_of_positiveCallBack_7();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_6 = V_2;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_7 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *>((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 **)L_5, L_6, L_7);
		V_0 = L_8;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_9 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_9) == ((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::add_nagativeCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_add_nagativeCallBack_mD52BBA926C04D4060A7F106701AD07EBF6A2290D (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_1 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_2 = NULL;
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_nagativeCallBack_8();
		V_0 = L_0;
	}

IL_0007:
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = V_0;
		V_1 = L_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_2 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)CastclassSealed((RuntimeObject*)L_4, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var));
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** L_5 = __this->get_address_of_nagativeCallBack_8();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_6 = V_2;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_7 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *>((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 **)L_5, L_6, L_7);
		V_0 = L_8;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_9 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_9) == ((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::remove_nagativeCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_remove_nagativeCallBack_m15E4DBD420CA6923A07B0B41F494E4EC44D08E6F (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_1 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * V_2 = NULL;
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_nagativeCallBack_8();
		V_0 = L_0;
	}

IL_0007:
	{
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = V_0;
		V_1 = L_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_2 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)CastclassSealed((RuntimeObject*)L_4, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var));
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 ** L_5 = __this->get_address_of_nagativeCallBack_8();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_6 = V_2;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_7 = V_1;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *>((CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 **)L_5, L_6, L_7);
		V_0 = L_8;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_9 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_9) == ((RuntimeObject*)(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_Start_mF2D103AD844C5B58409B50F3DE39927FE6BBC918 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4AB378A9F2B943A81B08D7B22766BEF74C7FA9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("RewardInterstitialAdPopupSample Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD4AB378A9F2B943A81B08D7B22766BEF74C7FA9C, /*hidden argument*/NULL);
		// mTimer = CountdownTimer(false);
		String_t* L_0;
		L_0 = RewardInterstitialAdPopupSample_CountdownTimer_mFCBB1F8D72A1F31D02E7117C98F0250C9314861F(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_mTimer_9(L_0);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_Update_m924B2688D0DBD6C18D6A23B34F9AC31428261DE2 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC8752075CB65ED05B9E28FEF215E880B16A3B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mTimer = CountdownTimer();
		String_t* L_0;
		L_0 = RewardInterstitialAdPopupSample_CountdownTimer_mFCBB1F8D72A1F31D02E7117C98F0250C9314861F(__this, (bool)1, /*hidden argument*/NULL);
		__this->set_mTimer_9(L_0);
		// if (mTotalSeconds <= 0)
		float L_1 = __this->get_mTotalSeconds_10();
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// SetZero();
		RewardInterstitialAdPopupSample_SetZero_m9962E2D1B963A73A1B48071B68B4346F4E2F616C(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// txtMsg.text = "seconds remaining : " + mTimer;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_txtMsg_4();
		String_t* L_3 = __this->get_mTimer_9();
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCEC8752075CB65ED05B9E28FEF215E880B16A3B3, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.String RewardInterstitialAdPopupSample::CountdownTimer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardInterstitialAdPopupSample_CountdownTimer_mFCBB1F8D72A1F31D02E7117C98F0250C9314861F (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, bool ___IsUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(IsUpdate)
		bool L_0 = ___IsUpdate0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// mTotalSeconds -= Time.deltaTime;
		float L_1 = __this->get_mTotalSeconds_10();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_mTotalSeconds_10(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_0015:
	{
		// TimeSpan timespan = TimeSpan.FromSeconds(mTotalSeconds);
		float L_3 = __this->get_mTotalSeconds_10();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4;
		L_4 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(((double)((double)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		// string timer = string.Format("{0:00}",timespan.Seconds);
		int32_t L_5;
		L_5 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_7, /*hidden argument*/NULL);
		// return timer;
		return L_8;
	}
}
// System.Void RewardInterstitialAdPopupSample::SetZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetZero_m9962E2D1B963A73A1B48071B68B4346F4E2F616C (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mTimer = @"00";
		__this->set_mTimer_9(_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		// mTotalSeconds = 0;
		__this->set_mTotalSeconds_10((0.0f));
		// OnPositiveEvent();
		RewardInterstitialAdPopupSample_OnPositiveEvent_m730E753C991924886622A0BA8346A4D8DC6394DE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::SetPositiveCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetPositiveCallBack_m18899B1AFA3552E280C8AC219D61B12BC415D561 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2A67DE575DF11F63A6133A2C5E9A1B6E1A7FF40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SetPositiveCallBack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB2A67DE575DF11F63A6133A2C5E9A1B6E1A7FF40, /*hidden argument*/NULL);
		// positiveCallBack += listener;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = ___listener0;
		RewardInterstitialAdPopupSample_add_positiveCallBack_m3B65AFD1C43EA9D9D588058F33A1B072858CEEB0(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::SetNagativeCallBack(RewardInterstitialAdPopupSample/CallBack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_SetNagativeCallBack_m4762080EBFEAB166B57CC9903546F3301F913E37 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592930CA27C658FD3579F246F7C87760F5420A51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SetNagativeCallBack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral592930CA27C658FD3579F246F7C87760F5420A51, /*hidden argument*/NULL);
		// nagativeCallBack += listener;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = ___listener0;
		RewardInterstitialAdPopupSample_add_nagativeCallBack_mD52BBA926C04D4060A7F106701AD07EBF6A2290D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::OnPositiveEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_OnPositiveEvent_m730E753C991924886622A0BA8346A4D8DC6394DE (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA9EC5C329FB9FA4328274119DD862607627129E);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * G_B2_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * G_B1_0 = NULL;
	{
		// Debug.Log("OnPositiveEvent");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAA9EC5C329FB9FA4328274119DD862607627129E, /*hidden argument*/NULL);
		// positiveCallBack?.Invoke();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_positiveCallBack_7();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		CallBack_Invoke_mFDE4177A6F355AA89336CF90564A7843A92A47DC(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::OnNagativeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample_OnNagativeEvent_m33F73DA3293BBFCC632214FBA34DEE47270361E1 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E5BCCB860EAFDA2416DACBAFDFA420A968F510);
		s_Il2CppMethodInitialized = true;
	}
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * G_B2_0 = NULL;
	CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * G_B1_0 = NULL;
	{
		// Debug.Log("OnNagativeEvent");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral55E5BCCB860EAFDA2416DACBAFDFA420A968F510, /*hidden argument*/NULL);
		// nagativeCallBack?.Invoke();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_0 = __this->get_nagativeCallBack_8();
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		CallBack_Invoke_mFDE4177A6F355AA89336CF90564A7843A92A47DC(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdPopupSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdPopupSample__ctor_m90DF066B1F562773F541E5BD24C69A6C035E9184 (RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string mTimer = @"00";
		__this->set_mTimer_9(_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		// public float mTotalSeconds = 5;
		__this->set_mTotalSeconds_10((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardInterstitialAdSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_Start_m3F352B4C256C228172B3B04B8051D972DCC00200 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	{
		// BidmadCommon.setIsDebug(true);
		BidmadCommon_setIsDebug_m329AA2530BA2F70C70343F60CD6FB6F7F1A5BD3F((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::LoadRewardInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_LoadRewardInterstitialAd_m75170B2213D0249C6C298D30E87CD7FAE13C14CF (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialClose_mF500D755C8EF5A57C15A8506776C9EC3BC413AB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialComplete_m0F40B81F469EB3F2C24A1667A7630E3D39C024E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialFail_mBA442F3954CD7A7878F44B43C2A2E1D3E544AFF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialLoad_mC11B603266E776402B731550302A928D2CD49A19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialShow_m7B43E34A29669F99A19101C84F74D7271E39103B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_OnRewardInterstitialSkip_mC5EBC943E64763FFB56A6DACF1E05B292BAB0809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB242FCD2856CB28E8490C34AD470E444D8D78A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardInterstitial == null)
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_0 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// rewardInterstitial = new BidmadRewardInterstitial("29e1ef67-98d2-47b3-9fa2-9192327dd75d");
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_1 = (BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 *)il2cpp_codegen_object_new(BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09_il2cpp_TypeInfo_var);
		BidmadRewardInterstitial__ctor_m75FF6236655C42AC2D846CC4D73C0D389C85EE89(L_1, _stringLiteralEBB242FCD2856CB28E8490C34AD470E444D8D78A, /*hidden argument*/NULL);
		((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->set_rewardInterstitial_4(L_1);
	}

IL_0016:
	{
		// rewardInterstitial.load();
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_2 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		NullCheck(L_2);
		BidmadRewardInterstitial_load_mA53DDD17FCAEED209770C5C97E51FB3A3B04CE65(L_2, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialLoadCallback(OnRewardInterstitialLoad);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_3 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialLoad_mC11B603266E776402B731550302A928D2CD49A19_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		BidmadRewardInterstitial_setRewardInterstitialLoadCallback_mCA2BB3902D26CDE356F3B0AFF15A364329AE9AC4(L_3, L_4, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialShowCallback(OnRewardInterstitialShow);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_5 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialShow_m7B43E34A29669F99A19101C84F74D7271E39103B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		BidmadRewardInterstitial_setRewardInterstitialShowCallback_m2C66EFBEEDB7CB9319F4547EA7D5E110491E0646(L_5, L_6, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialFailCallback(OnRewardInterstitialFail);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_7 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialFail_mBA442F3954CD7A7878F44B43C2A2E1D3E544AFF7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		BidmadRewardInterstitial_setRewardInterstitialFailCallback_mEF12F8E26A576ECBCFF6C74723CEC1F149501E07(L_7, L_8, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialCompleteCallback(OnRewardInterstitialComplete);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_9 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialComplete_m0F40B81F469EB3F2C24A1667A7630E3D39C024E7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		BidmadRewardInterstitial_setRewardInterstitialCompleteCallback_m781F124A493310A4C4E599210CBE3E615D8F1DD7(L_9, L_10, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialSkipCallback(OnRewardInterstitialSkip);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_11 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_12, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialSkip_mC5EBC943E64763FFB56A6DACF1E05B292BAB0809_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		BidmadRewardInterstitial_setRewardInterstitialSkipCallback_mD7BC3975391904E1B002FBB3F2E3275DA55F8791(L_11, L_12, /*hidden argument*/NULL);
		// rewardInterstitial.setRewardInterstitialCloseCallback(OnRewardInterstitialClose);
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_13 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, __this, (intptr_t)((intptr_t)RewardInterstitialAdSample_OnRewardInterstitialClose_mF500D755C8EF5A57C15A8506776C9EC3BC413AB9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		BidmadRewardInterstitial_setRewardInterstitialCloseCallback_m26F1AB6C22E53D9E2C81A786D0B2BAF28E2837DE(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::ShowRewardInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_ShowRewardInterstitialAd_m0CCFC0759DF9C0CBFC497C36BE836D70AEAF3277 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA_m0C28F38AD6156A2FE10CE2316F2B8342AF697668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__0_m674C714D259140F34A33C185B9375C43BEA7E881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__1_m2EBA3F3B2A5C0E47684289E54A3A11BA141ED8F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53146AE6220300695C467CD5E19D881597B6FD75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8586C5BCB8CE1799D76CC13FC21CDC8005398D51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * L_0 = (U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mD205169CFD0CCBE91818573CC89FD65533BDCB35(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// GameObject resource = Resources.Load<GameObject>("Prefabs/RewardInterstitialAdPopupSample");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteral53146AE6220300695C467CD5E19D881597B6FD75, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		V_1 = L_1;
		// GameObject parent = GameObject.Find("Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		V_2 = L_2;
		// GameObject popup = Instantiate<GameObject>(resource, parent.transform, false);
		U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * L_3 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_4, L_6, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_popup_0(L_7);
		// popup.SetActive(true);
		U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * L_8 = V_0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_popup_0();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// RewardInterstitialAdPopupSample popupComponent = GameObject.Find("PopupSample").GetComponent<RewardInterstitialAdPopupSample>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8586C5BCB8CE1799D76CC13FC21CDC8005398D51, /*hidden argument*/NULL);
		NullCheck(L_10);
		RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * L_11;
		L_11 = GameObject_GetComponent_TisRewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA_m0C28F38AD6156A2FE10CE2316F2B8342AF697668(L_10, /*hidden argument*/GameObject_GetComponent_TisRewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA_m0C28F38AD6156A2FE10CE2316F2B8342AF697668_RuntimeMethod_var);
		// popupComponent.SetPositiveCallBack(() => {
		//     Debug.Log("PositiveCallBack");
		// 
		//     #if UNITY_ANDROID || UNITY_IOS
		//         if (rewardInterstitial.isLoaded()){
		// 
		//             rewardInterstitial.show();
		//         }
		//     #endif
		// 
		//     Destroy(popup.gameObject);
		// });
		RewardInterstitialAdPopupSample_t4122D54BED3C0DD5145433C59A355C92740EAFFA * L_12 = L_11;
		U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * L_13 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_14 = (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)il2cpp_codegen_object_new(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		CallBack__ctor_m85EFD7051DE674AA6B2D4BFD903A8AA03CB668F8(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__0_m674C714D259140F34A33C185B9375C43BEA7E881_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		RewardInterstitialAdPopupSample_SetPositiveCallBack_m18899B1AFA3552E280C8AC219D61B12BC415D561(L_12, L_14, /*hidden argument*/NULL);
		// popupComponent.SetNagativeCallBack(() => {
		//     Debug.Log("NagativeCallBack");
		//     Destroy(popup.gameObject);
		// });
		U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * L_15 = V_0;
		CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * L_16 = (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 *)il2cpp_codegen_object_new(CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60_il2cpp_TypeInfo_var);
		CallBack__ctor_m85EFD7051DE674AA6B2D4BFD903A8AA03CB668F8(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__1_m2EBA3F3B2A5C0E47684289E54A3A11BA141ED8F1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		RewardInterstitialAdPopupSample_SetNagativeCallBack_m4762080EBFEAB166B57CC9903546F3301F913E37(L_12, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialLoad_mC11B603266E776402B731550302A928D2CD49A19 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral477DAAAC734A45FC2BC8CAE47587064DB214B812);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialLoad Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral477DAAAC734A45FC2BC8CAE47587064DB214B812, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialShow_m7B43E34A29669F99A19101C84F74D7271E39103B (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A971A74648F715C235490F32C339C215C36A7A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialShow Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5A971A74648F715C235490F32C339C215C36A7A2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialFail_mBA442F3954CD7A7878F44B43C2A2E1D3E544AFF7 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC019C20A6749770AEB32F07210CC5BFD2778D9BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialFail Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC019C20A6749770AEB32F07210CC5BFD2778D9BD, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialComplete_m0F40B81F469EB3F2C24A1667A7630E3D39C024E7 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral967E8CDC8557F3CD42740A1C99F9BD969BFCD4DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialComplete Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral967E8CDC8557F3CD42740A1C99F9BD969BFCD4DE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialSkip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialSkip_mC5EBC943E64763FFB56A6DACF1E05B292BAB0809 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF0A4051A9D102941B589F7D60FB946F6D2E574);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialSkip Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6BF0A4051A9D102941B589F7D60FB946F6D2E574, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::OnRewardInterstitialClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample_OnRewardInterstitialClose_mF500D755C8EF5A57C15A8506776C9EC3BC413AB9 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49F036C759D0BEDB8E8DE2C1ADAE5395217276B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRewardInterstitialClose Deletgate Callback Complate!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral49F036C759D0BEDB8E8DE2C1ADAE5395217276B2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RewardInterstitialAdSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardInterstitialAdSample__ctor_m9172CCD835A1847FC5A06A573C201D7C62151B68 (RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void gameobject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_Start_mB646112B99E3A67C67787352CFDDB503641A3C67 (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mEBE7D1EA7E7A9CB356300EF5409AE10403E8602E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_mEEFEF09AE52B5D5536BF720020B0F2CC688F473C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_m81FE4F1886A35B423E68F0B8539FD46F94EC69E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D025B3E77BC6E74531FA2B6505012A351DE4EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984E5D3792E09B7B17A6C0921423FC65E1EBDF85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE388FBD774AE7D27FF3077484F17B2F87A8C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_adTrackingAuthCallback_m6A3E2A14CEC53E8965766D8696356BD5B55C3A1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_onConsentFormDismissed_m2D5D2A1659E25E71E25D94C855341E3B447D28BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_onConsentFormLoadFailure_mBB5253817D450533B3688DC9C2CD01BEE827134E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_onConsentFormLoadSuccess_m20723D9971CB84A70BCA5B9E7FE4644DC8BCF920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_onConsentInfoUpdateFailure_m196FEC8599201B77FD16312FED43F029DFCD9377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gameobject_onConsentInfoUpdateSuccess_mC121E92BFAAA01F260E08D0A24CE5A7F0C9C56BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject bidmadManager = new GameObject("BidmadManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralBDE388FBD774AE7D27FF3077484F17B2F87A8C42, /*hidden argument*/NULL);
		V_0 = L_0;
		// bidmadManager.AddComponent<BidmadManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		BidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132 * L_2;
		L_2 = GameObject_AddComponent_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_mEEFEF09AE52B5D5536BF720020B0F2CC688F473C(L_1, /*hidden argument*/GameObject_AddComponent_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_mEEFEF09AE52B5D5536BF720020B0F2CC688F473C_RuntimeMethod_var);
		// DontDestroyOnLoad(bidmadManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// var obj = FindObjectsOfType<BidmadManager>();
		BidmadManagerU5BU5D_t91F23C61ACE478E3294EBFA57AE86B0F78254F0C* L_4;
		L_4 = Object_FindObjectsOfType_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_m81FE4F1886A35B423E68F0B8539FD46F94EC69E1(/*hidden argument*/Object_FindObjectsOfType_TisBidmadManager_t2FCB93A7CBCAE8822B693D4BD4C0CE9712617132_m81FE4F1886A35B423E68F0B8539FD46F94EC69E1_RuntimeMethod_var);
		// if (obj.Length == 1)
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// DontDestroyOnLoad(bidmadManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// }
		goto IL_0030;
	}

IL_002a:
	{
		// Destroy(bidmadManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// gGdpr = new BidmadGoogleGDPR();
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_7 = (BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 *)il2cpp_codegen_object_new(BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492_il2cpp_TypeInfo_var);
		BidmadGoogleGDPR__ctor_mABA0D8CFFC4451FEC9E417525F6EEC7F0B76A237(L_7, /*hidden argument*/NULL);
		__this->set_gGdpr_4(L_7);
		// gGdpr.reset();
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_8 = __this->get_gGdpr_4();
		NullCheck(L_8);
		BidmadGoogleGDPR_reset_mBBA632CDDAA62006F54D7D91789415978A069709(L_8, /*hidden argument*/NULL);
		// gGdpr.setConsentInfoUpdateSuccessCallback(onConsentInfoUpdateSuccess);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_9 = __this->get_gGdpr_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)gameobject_onConsentInfoUpdateSuccess_mC121E92BFAAA01F260E08D0A24CE5A7F0C9C56BA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		BidmadGoogleGDPR_setConsentInfoUpdateSuccessCallback_m1F475CD106C68C9F8D05831E6258C130953B600D(L_9, L_10, /*hidden argument*/NULL);
		// gGdpr.setConsentInfoUpdateFailureCallback(onConsentInfoUpdateFailure);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_11 = __this->get_gGdpr_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_12 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_12, __this, (intptr_t)((intptr_t)gameobject_onConsentInfoUpdateFailure_m196FEC8599201B77FD16312FED43F029DFCD9377_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_11);
		BidmadGoogleGDPR_setConsentInfoUpdateFailureCallback_m8175A5D8D04A04B6C9F956788E1F8ACF90238C8C(L_11, L_12, /*hidden argument*/NULL);
		// gGdpr.setConsentFormLoadSuccessCallback(onConsentFormLoadSuccess);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_13 = __this->get_gGdpr_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, __this, (intptr_t)((intptr_t)gameobject_onConsentFormLoadSuccess_m20723D9971CB84A70BCA5B9E7FE4644DC8BCF920_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		BidmadGoogleGDPR_setConsentFormLoadSuccessCallback_mCC480DCB897E48F2B2EFD36665AC05C560FDADC4(L_13, L_14, /*hidden argument*/NULL);
		// gGdpr.setConsentFormLoadFailureCallback(onConsentFormLoadFailure);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_15 = __this->get_gGdpr_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_16, __this, (intptr_t)((intptr_t)gameobject_onConsentFormLoadFailure_mBB5253817D450533B3688DC9C2CD01BEE827134E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_15);
		BidmadGoogleGDPR_setConsentFormLoadFailureCallback_m2D11A6140C9A2012246A509E5A141242BABF1597(L_15, L_16, /*hidden argument*/NULL);
		// gGdpr.setConsentFormDismissedCallback(onConsentFormDismissed);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_17 = __this->get_gGdpr_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_18 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_18, __this, (intptr_t)((intptr_t)gameobject_onConsentFormDismissed_m2D5D2A1659E25E71E25D94C855341E3B447D28BC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_17);
		BidmadGoogleGDPR_setConsentFormDismissedCallback_m285404D32B402D8C3DE6C7A6A327933E725B196A(L_17, L_18, /*hidden argument*/NULL);
		// gGdpr.setDebug("24CA94DDEB5A9979BF934BB443157007", true);
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_19 = __this->get_gGdpr_4();
		NullCheck(L_19);
		BidmadGoogleGDPR_setDebug_m50D9DC406E376F0BBA10E2841F924362B5C8BE90(L_19, _stringLiteral0D025B3E77BC6E74531FA2B6505012A351DE4EE6, (bool)1, /*hidden argument*/NULL);
		// gGdpr.requestConsentInfoUpdate();
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_20 = __this->get_gGdpr_4();
		NullCheck(L_20);
		BidmadGoogleGDPR_requestConsentInfoUpdate_m72C6F6C5107B1D45DCDBDFB19313DA3E9D8E1AF1(L_20, /*hidden argument*/NULL);
		// BidmadCommon.setGdprConsent(false, true);
		BidmadCommon_setGdprConsent_m4E989BAAC4B5AF9BC89ECBEB4E9834960CDB7C72((bool)0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("getGdprConsent : " + BidmadCommon.getGdprConsent(true));
		int32_t L_21;
		L_21 = BidmadCommon_getGdprConsent_mD81A582ECB8FCD2427BA992B8D6BA30BA9AFB1F8((bool)1, /*hidden argument*/NULL);
		V_1 = L_21;
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral984E5D3792E09B7B17A6C0921423FC65E1EBDF85, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// Debug.Log("getGdprConsent : " + BidmadCommon.getGdprConsent(false));
		int32_t L_24;
		L_24 = BidmadCommon_getGdprConsent_mD81A582ECB8FCD2427BA992B8D6BA30BA9AFB1F8((bool)0, /*hidden argument*/NULL);
		V_1 = L_24;
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral984E5D3792E09B7B17A6C0921423FC65E1EBDF85, L_25, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// BidmadCommon.reqAdTrackingAuthorization(adTrackingAuthCallback);
		Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 * L_27 = (Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504 *)il2cpp_codegen_object_new(Action_1_t975D066E8FB585C6312D6D701FECA4699BC01504_il2cpp_TypeInfo_var);
		Action_1__ctor_mEBE7D1EA7E7A9CB356300EF5409AE10403E8602E(L_27, __this, (intptr_t)((intptr_t)gameobject_adTrackingAuthCallback_m6A3E2A14CEC53E8965766D8696356BD5B55C3A1D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mEBE7D1EA7E7A9CB356300EF5409AE10403E8602E_RuntimeMethod_var);
		BidmadCommon_reqAdTrackingAuthorization_mCBCC75AA6EE7A237B22036D341AC094ED164F068(L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameobject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_Update_m767635577917850F7F598903BB54F4EBC332481E (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void gameobject::adTrackingAuthCallback(BidmadTrackingAuthorizationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_adTrackingAuthCallback_m6A3E2A14CEC53E8965766D8696356BD5B55C3A1D (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE1CCA14954AB164F04AC1A0A7D1E197A7BC6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350AC28639F1D447AB1E6C37A1DC42807E84D15A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD92A9D00937D82486B3F5C1AB70A15E165FEAAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusAuthorized)
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}
	{
		// Debug.Log("BidmadAuthorizationStatusAuthorized");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1FE1CCA14954AB164F04AC1A0A7D1E197A7BC6D1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// else if (status == BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusDenied)
		int32_t L_1 = ___status0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log("BidmadAuthorizationStatusDenied");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCD92A9D00937D82486B3F5C1AB70A15E165FEAAC, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// else if (status == BidmadTrackingAuthorizationStatus.BidmadAuthorizationStatusLessThaniOS14)
		int32_t L_2 = ___status0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("BidmadAuthorizationStatusLessThaniOS14");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral350AC28639F1D447AB1E6C37A1DC42807E84D15A, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void gameobject::onConsentInfoUpdateSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_onConsentInfoUpdateSuccess_mC121E92BFAAA01F260E08D0A24CE5A7F0C9C56BA (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD585B5C92B287D270AEC0E7CC12667ACE35C0C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("onConsentInfoUpdateSuccess callback : " + gGdpr.isConsentFormAvailable());
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_0 = __this->get_gGdpr_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = BidmadGoogleGDPR_isConsentFormAvailable_m915E7C75BA828445336321EE42ED79524CC3FEED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCD585B5C92B287D270AEC0E7CC12667ACE35C0C7, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if(gGdpr.isConsentFormAvailable()){
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_4 = __this->get_gGdpr_4();
		NullCheck(L_4);
		bool L_5;
		L_5 = BidmadGoogleGDPR_isConsentFormAvailable_m915E7C75BA828445336321EE42ED79524CC3FEED(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// gGdpr.loadForm();
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_6 = __this->get_gGdpr_4();
		NullCheck(L_6);
		BidmadGoogleGDPR_loadForm_m9584205C03B9AFF87C5A5C91DA95DFB4BBC448BF(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void gameobject::onConsentInfoUpdateFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_onConsentInfoUpdateFailure_m196FEC8599201B77FD16312FED43F029DFCD9377 (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC22DEC5F9F25536170F9B52FF2C688472EEA6F8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentInfoUpdateFailure callback : " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC22DEC5F9F25536170F9B52FF2C688472EEA6F8A, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameobject::onConsentFormLoadSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_onConsentFormLoadSuccess_m20723D9971CB84A70BCA5B9E7FE4644DC8BCF920 (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral008636B167DCA11A4DDBB742992D0228EF34946E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("onConsentFormLoadSuccess callback : " + gGdpr.getConsentStatus());
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_0 = __this->get_gGdpr_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BidmadGoogleGDPR_getConsentStatus_m06014526AD47246B71325E4B7C48D89382978C0B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral008636B167DCA11A4DDBB742992D0228EF34946E, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if(gGdpr.getConsentStatus() == 1)
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_4 = __this->get_gGdpr_4();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BidmadGoogleGDPR_getConsentStatus_m06014526AD47246B71325E4B7C48D89382978C0B(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		// gGdpr.showForm();
		BidmadGoogleGDPR_tAD4000C68A08F16A7A0D78A05440B99068280492 * L_6 = __this->get_gGdpr_4();
		NullCheck(L_6);
		BidmadGoogleGDPR_showForm_m9D61A67198F2475B02E72A38B0E726BBE01C2ED7(L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void gameobject::onConsentFormLoadFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_onConsentFormLoadFailure_mBB5253817D450533B3688DC9C2CD01BEE827134E (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EBFCB1AC06756B55370872890D762C1765C474);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentFormLoadFailure callback : " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA3EBFCB1AC06756B55370872890D762C1765C474, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameobject::onConsentFormDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject_onConsentFormDismissed_m2D5D2A1659E25E71E25D94C855341E3B447D28BC (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC4469DD15842F9A85ED129FBB9022367485B39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("onConsentFormDismissed callback : " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7BC4469DD15842F9A85ED129FBB9022367485B39, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameobject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameobject__ctor_m936FE56AF1B20EC3B6F87699379DD4AB807DECE2 (gameobject_t7DA869D26CB14AB7BC2D9FBA42B5E7BC9841779D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void RewardInterstitialAdPopupSample/CallBack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallBack__ctor_m85EFD7051DE674AA6B2D4BFD903A8AA03CB668F8 (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RewardInterstitialAdPopupSample/CallBack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallBack_Invoke_mFDE4177A6F355AA89336CF90564A7843A92A47DC (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult RewardInterstitialAdPopupSample/CallBack::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallBack_BeginInvoke_mA60448BAD7B4B7CB908DCDC26C12FEDF53102F58 (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void RewardInterstitialAdPopupSample/CallBack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallBack_EndInvoke_mEF1E4DF72BF7F8BF9656EFAAFD711001F34E97EF (CallBack_t5ED4480BDAC8EA424A069BCAF72D5A4149413F60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardInterstitialAdSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD205169CFD0CCBE91818573CC89FD65533BDCB35 (U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RewardInterstitialAdSample/<>c__DisplayClass3_0::<ShowRewardInterstitialAd>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__0_m674C714D259140F34A33C185B9375C43BEA7E881 (U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC6985F05605BFD0AC84B39C805FD3E709BD40C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("PositiveCallBack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5AC6985F05605BFD0AC84B39C805FD3E709BD40C, /*hidden argument*/NULL);
		// if (rewardInterstitial.isLoaded()){
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_0 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = BidmadRewardInterstitial_isLoaded_mAEC2A7A0F4F749DB95AF0DBD141394839DA090A3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// rewardInterstitial.show();
		BidmadRewardInterstitial_tBCFDC5BDB08DA2DA3C2AA353E9B0E0C6478C4C09 * L_2 = ((RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_StaticFields*)il2cpp_codegen_static_fields_for(RewardInterstitialAdSample_t8725371DA3C15C0D0DF25BF7568FB57210958783_il2cpp_TypeInfo_var))->get_rewardInterstitial_4();
		NullCheck(L_2);
		BidmadRewardInterstitial_show_m5624AB3696DE1EEA58F43C7C6D8EF1AA9184B949(L_2, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// Destroy(popup.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_popup_0();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void RewardInterstitialAdSample/<>c__DisplayClass3_0::<ShowRewardInterstitialAd>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CShowRewardInterstitialAdU3Eb__1_m2EBA3F3B2A5C0E47684289E54A3A11BA141ED8F1 (U3CU3Ec__DisplayClass3_0_t4E08975A3D4B993D0BF1424DCB1E37E5E121D5DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8940A6C0FF088289AE4F81F0F71984A5D024EF56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("NagativeCallBack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8940A6C0FF088289AE4F81F0F71984A5D024EF56, /*hidden argument*/NULL);
		// Destroy(popup.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_popup_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
