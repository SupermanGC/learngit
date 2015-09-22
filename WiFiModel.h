//
//  WiFiModel.h
//  CES2016APP
//
//  Created by SHSW20150917 on 15/9/20.
//  Copyright © 2015年 SHSW20150917. All rights reserved.
//测试看看，啦啦啦

#import <Foundation/Foundation.h>

@interface WiFiModel : NSObject

@property (nonatomic, copy) NSString *wl50_passwd;

@property (nonatomic, copy) NSString *wl50_channel;

@property (nonatomic, copy) NSString *wl_wps;

@property (nonatomic, copy) NSString *wl_mode;

@property (nonatomic, copy) NSString *wl50_auth;

@property (nonatomic, copy) NSString *wl50_wps;

@property (nonatomic, copy) NSString *wl50_mode;

@property (nonatomic, copy) NSString *wl_passwd;

@property (nonatomic, copy) NSString *wl_ssid;

@property (nonatomic, copy) NSString *wl_channel;

@property (nonatomic, copy) NSString *wl50_ssid;

@property (nonatomic, copy) NSString *wl50_radio;

@property (nonatomic, copy) NSString *wl_radio;

@property (nonatomic, copy) NSString *wl_auth;

@end
