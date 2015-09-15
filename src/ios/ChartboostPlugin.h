//Copyright (c) 2014 Sang Ki Kwon (Cranberrygame)
//Email: cranberrygame@yahoo.com
//Homepage: http://cranberrygame.github.io
//License: MIT (http://opensource.org/licenses/MIT)
#import <Cordova/CDV.h>
#import <Chartboost/Chartboost.h>
#import <Chartboost/CBNewsfeed.h>

@interface ChartboostPlugin : CDVPlugin <ChartboostDelegate, CBNewsfeedDelegate>

@property NSString *callbackIdKeepCallback;

//
@property NSString *appId;
@property NSString *appSignature;
//
@property BOOL fullScreenAdPreload;
@property BOOL moreAppsAdPreload;
@property BOOL rewardedVideoAdPreload;

- (void) setUp:(CDVInvokedUrlCommand*)command;
- (void) preloadFullScreenAd:(CDVInvokedUrlCommand*)command;
- (void) showFullScreenAd:(CDVInvokedUrlCommand*)command;
- (void) preloadMoreAppsAd:(CDVInvokedUrlCommand*)command;
- (void) showMoreAppsAd:(CDVInvokedUrlCommand*)command;
- (void) preloadRewardedVideoAd:(CDVInvokedUrlCommand*)command;
- (void) showRewardedVideoAd:(CDVInvokedUrlCommand*)command;

@end
