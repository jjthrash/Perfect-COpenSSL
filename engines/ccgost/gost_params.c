/**********************************************************************
 *                        params.c                                    *
 *             Copyright (c) 2005-2006 Cryptocom LTD                  *
 *         This file is distributed under the same license as OpenSSL *
 *                                                                    *
 * Definitions of GOST R 34.10 parameter sets, defined in RFC 4357    *
 *         OpenSSL 0.9.9 libraries required to compile and use        *
 *                              this code                             *
 **********************************************************************/
#include "gost_params.h"
#include <objects.h>
/* Parameters of GOST 34.10 */

R3410_params R3410_paramset[] = {
/* Paramset A */
    {NID_id_GostR3410_94_CryptoPro_A_ParamSet,
     "100997906755055304772081815535925224869"
     "8410825720534578748235158755771479905292727772441528526992987964833"
     "5669968284202797289605274717317548059048560713474685214192868091256"
     "1502802222185647539190902656116367847270145019066794290930185446216"
     "3997308722217328898303231940973554032134009725883228768509467406639"
     "62",
     "127021248288932417465907042777176443525"
     "7876535089165358128175072657050312609850984974231883334834011809259"
     "9999512098893413065920561499672425412104927434935707492031276956145"
     "1689224110579311248812610229678534638401693520013288995000362260684"
     "2227508135323070045173416336850045410625869714168836867788425378203"
     "83",
     "683631961449557007844441656118272528951"
     "02170888761442055095051287550314083023"}
    ,
    {NID_id_GostR3410_94_CryptoPro_B_ParamSet,
     "429418261486158041438734477379555023926"
     "7234596860714306679811299408947123142002706038521669956384871995765"
     "7284814898909770759462613437669456364882730370838934791080835932647"
     "9767786019153434744009610342313166725786869204821949328786333602033"
     "8479709268434224762105576023501613261478065276102850944540333865234"
     "1",
     "139454871199115825601409655107690713107"
     "0417070599280317977580014543757653577229840941243685222882398330391"
     "1468164807668823692122073732267216074074777170091113455043205380464"
     "7694904686120113087816240740184800477047157336662926249423571248823"
     "9685422217536601433914856808405203368594584948031873412885804895251"
     "63",
     "79885141663410976897627118935756323747307951916507639758300472692338873533959"}
    ,
    {NID_id_GostR3410_94_CryptoPro_C_ParamSet,
     "816552717970881016017893191415300348226"
     "2544051353358162468249467681876621283478212884286545844013955142622"
     "2087723485023722868022275009502224827866201744494021697716482008353"
     "6398202298024892620480898699335508064332313529725332208819456895108"
     "5155178100221003459370588291073071186553005962149936840737128710832"
     "3",
     "110624679233511963040518952417017040248"
     "5862954819831383774196396298584395948970608956170224210628525560327"
     "8638246716655439297654402921844747893079518669992827880792192992701"
     "1428546551433875806377110443534293554066712653034996277099320715774"
     "3542287621283671843703709141350171945045805050291770503634517804938"
     "01",
     "113468861199819350564868233378875198043"
     "267947776488510997961231672532899549103"}
    ,
    {NID_id_GostR3410_94_CryptoPro_D_ParamSet,
     "756976611021707301782128757801610628085"
     "5283803109571158829574281419208532589041660017017859858216341400371"
     "4687551412794400562878935266630754392677014598582103365983119173924"
     "4732511225464712252386803315902707727668715343476086350472025298282"
     "7271461690125050616858238384366331089777463541013033926723743254833"
     "7",
     "905457649621929965904290958774625315611"
     "3056083907389766971404812524422262512556054474620855996091570786713"
     "5849550236741915584185990627801066465809510095784713989819413820871"
     "5964648914493053407920737078890520482730623038837767710173664838239"
     "8574828787891286471201460474326612697849693665518073864436497893214"
     "9",
     "108988435796353506912374591498972192620"
     "190487557619582334771735390599299211593"}
    ,

    {NID_id_GostR3410_94_CryptoPro_XchA_ParamSet,
     "1335318132727206734338595199483190012179423759678474868994823595993"
     "6964252873471246159040332773182141032801252925387191478859899310331"
     "0567744136196364803064721377826656898686468463277710150809401182608"
     "7702016153249904683329312949209127762411378780302243557466062839716"
     "59376426832674269780880061631528163475887",
     "14201174159756348119636828602231808974327613839524373876287257344192"
     "74593935127189736311660784676003608489466235676257952827747192122419"
     "29071046134208380636394084512691828894000571524625445295769349356752"
     "72895683154177544176313938445719175509684710784659566254794231229333"
     "8483924514339614727760681880609734239",
     "91771529896554605945588149018382750217296858393520724172743325725474"
     "374979801"}
    ,
    {NID_id_GostR3410_94_CryptoPro_XchB_ParamSet,
     "8890864727828423151699995801875757891031463338652579140051973659"
     "3048131440685857067369829407947744496306656291505503608252399443"
     "7900272386749145996230867832228661977543992816745254823298629859"
     "8753575466286051738837854736167685769017780335804511440773337196"
     "2538423532919394477873664752824509986617878992443177",
     "1028946126624994859676552074360530315217970499989304888248413244"
     "8474923022758470167998871003604670704877377286176171227694098633"
     "1539089568784129110109512690503345393869871295783467257264868341"
     "7200196629860561193666752429682367397084815179752036423595736533"
     "68957392061769855284593965042530895046088067160269433",
     "9109671391802626916582318050603555673628769498182593088388796888"
     "5281641595199"}
    ,
    {NID_id_GostR3410_94_CryptoPro_XchC_ParamSet,
     "4430618464297584182473135030809859326863990650118941756995270074"
     "8609973181426950235239623239110557450826919295792878938752101867"
     "7047181623251027516953100431855964837602657827828194249605561893"
     "6965865325513137194483136247773653468410118796740709840825496997"
     "9375560722345106704721086025979309968763193072908334",
     "1246996366993477513607147265794064436203408861395055989217248455"
     "7299870737698999651480662364723992859320868822848751165438350943"
     "3276647222625940615560580450040947211826027729977563540237169063"
     "0448079715771649447778447000597419032457722226253269698374446528"
     "35352729304393746106576383349151001715930924115499549",
     "6787876137336591234380295020065682527118129468050147943114675429"
     "4748422492761"}
    ,

    {NID_undef, NULL, NULL, NULL}
};

R3410_2001_params R3410_2001_paramset[] = {
    /* default_cc_sign01_param 1.2.643.2.9.1.8.1 */
    {NID_id_GostR3410_2001_ParamSet_cc,
     /* A */
     "C0000000000000000000000000000000000000000000000000000000000003c4",
     /* B */
     "2d06B4265ebc749ff7d0f1f1f88232e81632e9088fd44b7787d5e407e955080c",
     /* P */
     "C0000000000000000000000000000000000000000000000000000000000003C7",
     /* Q */
     "5fffffffffffffffffffffffffffffff606117a2f4bde428b7458a54b6e87b85",
     /* X */
     "2",
     /* Y */
     "a20e034bf8813ef5c18d01105e726a17eb248b264ae9706f440bedc8ccb6b22c"}
    ,
    /* 1.2.643.2.2.35.0 */
    {NID_id_GostR3410_2001_TestParamSet,
     "7",
     "5FBFF498AA938CE739B8E022FBAFEF40563F6E6A3472FC2A514C0CE9DAE23B7E",
     "8000000000000000000000000000000000000000000000000000000000000431",
     "8000000000000000000000000000000150FE8A1892976154C59CFC193ACCF5B3",
     "2",
     "08E2A8A0E65147D4BD6316030E16D19C85C97F0A9CA267122B96ABBCEA7E8FC8"}
    ,
    /*
     * 1.2.643.2.2.35.1
     */
    {NID_id_GostR3410_2001_CryptoPro_A_ParamSet,
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD94",
     "a6",
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD97",
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF6C611070995AD10045841B09B761B893",
     "1",
     "8D91E471E0989CDA27DF505A453F2B7635294F2DDF23E3B122ACC99C9E9F1E14"}
    ,
    /*
     * 1.2.643.2.2.35.2
     */
    {NID_id_GostR3410_2001_CryptoPro_B_ParamSet,
     "8000000000000000000000000000000000000000000000000000000000000C96",
     "3E1AF419A269A5F866A7D3C25C3DF80AE979259373FF2B182F49D4CE7E1BBC8B",
     "8000000000000000000000000000000000000000000000000000000000000C99",
     "800000000000000000000000000000015F700CFFF1A624E5E497161BCC8A198F",
     "1",
     "3FA8124359F96680B83D1C3EB2C070E5C545C9858D03ECFB744BF8D717717EFC"}
    ,
    /*
     * 1.2.643.2.2.35.3
     */
    {NID_id_GostR3410_2001_CryptoPro_C_ParamSet,
     "9B9F605F5A858107AB1EC85E6B41C8AACF846E86789051D37998F7B9022D7598",
     "805a",
     "9B9F605F5A858107AB1EC85E6B41C8AACF846E86789051D37998F7B9022D759B",
     "9B9F605F5A858107AB1EC85E6B41C8AA582CA3511EDDFB74F02F3A6598980BB9",
     "0",
     "41ECE55743711A8C3CBF3783CD08C0EE4D4DC440D4641A8F366E550DFDB3BB67"}
    ,
    /*
     * 1.2.643.2.2.36.0
     */
    {NID_id_GostR3410_2001_CryptoPro_XchA_ParamSet,
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD94",
     "a6",
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD97",
     "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF6C611070995AD10045841B09B761B893",
     "1",
     "8D91E471E0989CDA27DF505A453F2B7635294F2DDF23E3B122ACC99C9E9F1E14"}
    ,
    /*
     * 1.2.643.2.2.36.1
     */
    {NID_id_GostR3410_2001_CryptoPro_XchB_ParamSet,
     "9B9F605F5A858107AB1EC85E6B41C8AACF846E86789051D37998F7B9022D7598",
     "805a",
     "9B9F605F5A858107AB1EC85E6B41C8AACF846E86789051D37998F7B9022D759B",
     "9B9F605F5A858107AB1EC85E6B41C8AA582CA3511EDDFB74F02F3A6598980BB9",
     "0",
     "41ECE55743711A8C3CBF3783CD08C0EE4D4DC440D4641A8F366E550DFDB3BB67"}
    ,
    {0, NULL, NULL, NULL, NULL, NULL, NULL}
};
