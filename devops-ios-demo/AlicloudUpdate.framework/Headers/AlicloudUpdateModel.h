//
//  AlicloudUpdateModel.h
//  AlicloudUpdate
//
//  Created by 魏晓堃 on 2019/9/11.
//  Copyright © 2019 魏晓堃. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlicloudUpdateModel : NSObject

//上行消息

@property (copy, nonatomic) NSString *identifier;          // appkey@iphoneos 或 appkey@android
@property (copy, nonatomic) NSString *appVersion;          // app 版本
@property (copy, nonatomic) NSString *updateTypes;         // 固定值，"[\"main\"]"
@property (copy, nonatomic) NSString *model;               // 设备机型，例如：iPhone9,1
@property (copy, nonatomic) NSString *brand;               // 设备品牌，固定值 Apple
@property (copy, nonatomic) NSString *osVersion;           // OS版本(如：5.5.0)//系统版本号
@property (copy, nonatomic) NSString *packageMd5;          // 下发的 MD5，存储起来下次带上
@property (copy, nonatomic) NSString *utdid;               // utdid，//请求中放在 header 中
//公有云增加的字段
@property (copy, nonatomic) NSString *ip;                  //客户端IP地址
@property (copy, nonatomic) NSString *proxyIp;             //非必填，代理服务器地址
@property (copy, nonatomic) NSString *ttid;                //渠道号拼接标识, 示例格式600000@DemoApp_Android_1.0
@property (copy, nonatomic) NSString *channel;             //纯渠道号，示例格式 600000
@property (copy, nonatomic) NSString *os;                  //系统名(ANDROID/IOS)
//@property (copy, nonatomic) NSString *apiLevel;            //OS API级别，安卓特有
@property (copy, nonatomic) NSString *arch;                //客户端架构参数，示例：armv7、arm64
@property (assign, nonatomic) NSInteger netStatus;        //网络状态。2G-1, 3G-2, 4G-3, 5G-4, WIFI-10
@property (copy, nonatomic) NSString *locale;              //语言选项
@property (copy, nonatomic) NSString *md5Sum;              //当前包的MD5值
@property (copy, nonatomic) NSString *appKey;              //appKey
//其他需要的字段
@property (copy, nonatomic) NSString *appSecret;           //appSecret


// 下行消息
@property (copy, nonatomic) NSString *plistUrl;            // 此为对应版本的 plist 下载链接
@property (copy, nonatomic) NSString *packageUrl;          // ipa 的下载链接
@property (copy, nonatomic) NSString *remindCount;         // 最大提醒次数
@property (copy, nonatomic) NSString *remindStrategy;      // 弹窗提醒策略
@property (copy, nonatomic) NSString *version;             // 更新推送的版本
@property (copy, nonatomic) NSString *info;                // 更新推送的文案信息
@property (copy, nonatomic) NSString *md5;                 // md5 值，下次上发时带上
@property (copy, nonatomic) NSString *size;                // 包的大小
@property (copy, nonatomic) NSString *channelNum;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSString *batchBid;
@property (assign, nonatomic) BOOL  isIncr;


// 手动检测
@property (assign, nonatomic) BOOL isManual;               // 需求手动检测，用于勿扰模式 A B

@end

NS_ASSUME_NONNULL_END
