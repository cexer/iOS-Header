//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WKWebView, _WKLinkIconParameters;

@protocol _WKIconLoadingDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 shouldLoadIconWithParameters:(_WKLinkIconParameters *)arg2 completionHandler:(void (^)(void (^)(NSData *)))arg3;
@end

