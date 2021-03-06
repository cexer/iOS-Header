//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol MetricMeasurementHelperProtocol_Internal;

@interface MXMProxyServiceManager : NSObject
{
    NSXPCConnection *__serviceConnection;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly) NSXPCConnection *_serviceConnection; // @synthesize _serviceConnection=__serviceConnection;
- (void)dealloc;
- (id)_sampleWithProxyMetric:(id)arg1 timeout:(double)arg2 stopReason:(unsigned long long *)arg3;
- (_Bool)wake;
@property(readonly) id <MetricMeasurementHelperProtocol_Internal> _proxyObject;
- (id)initInternal;

@end

