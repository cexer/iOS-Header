//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MRDSystemEndpointEntry : NSObject
{
    NSString *_outputDeviceUID;
    long long _type;
    NSDate *_date;
    long long _event;
    NSString *_eventReason;
    NSString *_selectionReason;
    long long _changeType;
}

- (void).cxx_destruct;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSString *selectionReason; // @synthesize selectionReason=_selectionReason;
@property(retain, nonatomic) NSString *eventReason; // @synthesize eventReason=_eventReason;
@property(nonatomic) long long event; // @synthesize event=_event;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (id)description;

@end

