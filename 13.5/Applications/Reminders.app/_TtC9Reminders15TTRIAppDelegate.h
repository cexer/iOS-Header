//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC9Reminders15TTRIAppDelegate : UIResponder <UIApplicationDelegate>
{
    MISSING_TYPE *store;
    MISSING_TYPE *$__lazy_storage_$_siriVocabularyUpdater;
    MISSING_TYPE *$__lazy_storage_$_attachmentThumbnailsManager;
    MISSING_TYPE *$__lazy_storage_$_geoService;
    MISSING_TYPE *applicationRunProperties;
}

- (void).cxx_destruct;
- (void)application:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (id)init;

@end

