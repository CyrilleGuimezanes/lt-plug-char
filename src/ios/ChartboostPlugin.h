//Copyright (c) 2015 Luditeam
//Email: dev@Luditeam.com
#import <Cordova/CDV.h>
#import <Chartboost/Chartboost.h>
#import <Chartboost/CBNewsfeed.h>

@interface ChartboostPlugin : CDVPlugin <ChartboostDelegate, CBNewsfeedDelegate>

@property NSString *callbackIdKeepCallback;
//
@property NSString *email;
@property NSString *licenseKey_;
@property BOOL validLicenseKey;
//
@property NSString *appId;
@property NSString *appSignature;
//
@property BOOL interstitialAdPreload;
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
