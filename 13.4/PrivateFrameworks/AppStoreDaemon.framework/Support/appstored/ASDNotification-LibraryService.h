//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDNotification.h>

@interface ASDNotification (LibraryService)
+ (id)notificationForUnregisteredBundleIDs:(id)arg1;
+ (id)notificationForUninstalls:(id)arg1 withDeviceID:(id)arg2;
+ (id)notificationForRegisteredApps:(id)arg1;
+ (id)notificationForInstalls:(id)arg1 withDeviceID:(id)arg2;
+ (id)notificationForRefreshWithDeviceID:(id)arg1;
+ (id)notificationForRefreshWithBundleIDs:(id)arg1;
@end

