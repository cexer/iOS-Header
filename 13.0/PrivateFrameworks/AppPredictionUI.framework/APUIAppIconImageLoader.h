//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionUI/SFResourceLoader-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APUIAppIconImageLoader : NSObject <SFResourceLoader>
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_blankIconImage;
- (void)_getImageForArtwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadImageWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)registerImageLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

