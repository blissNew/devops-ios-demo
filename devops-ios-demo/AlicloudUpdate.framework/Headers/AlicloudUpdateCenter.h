//
//  AlicloudUpdateCenter.h
//  AlicloudUpdate
//
//  Created by 魏晓堃 on 2019/9/11.
//  Copyright © 2019 魏晓堃. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlicloudUpdateModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    ReleaseEnvironment,  //生产环境
    DayEnvironment,      //日常环境控制台
    PreEnvironment,      //预发环境
} RequstHost;

typedef void(^UpdateViewBlock)(AlicloudUpdateModel *updateModel);

@interface AlicloudUpdateCenter : NSObject
///请求更新需要带的参数和请求成功后下发的参数的model
@property (strong, nonatomic) AlicloudUpdateModel *updateModel;
/// 显示log日志，默认yes
@property(nonatomic, assign) BOOL enableLog;
///默认生产环境
@property(nonatomic, assign) RequstHost requestHost;
///根据更新策略赋值
@property(nonatomic, assign, readonly) BOOL updateStrategy;
/// 更新视图的回调，用户需自己定义弹出的更新视图
@property(nonatomic, copy) UpdateViewBlock updateViewCallback;

/// 初始化实例
+ (instancetype)shareInstance;

/// 手动检查更新
- (void)manualCheckUpdate;

/// 检查新版本
- (void)fetchNewVersionRequest;

/// ipa安装后上报
- (void)reportUpdateReasonRequest;

/// 点击视图『更新』按钮调用，必须调用
- (void)clickUpdateButton;

@end
NS_ASSUME_NONNULL_END
