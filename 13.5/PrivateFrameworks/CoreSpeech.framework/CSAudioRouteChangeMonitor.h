//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;
- (_Bool)jarvisConnected;
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;
- (_Bool)hearstConnected;
- (void)getHearstConnected:(CDUnknownBlockType)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;

@end

