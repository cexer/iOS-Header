//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCHLSKey, FCHLSMap, NSURL;

@interface FCHLSSegment : NSObject
{
    FCHLSMap *_map;
    NSURL *_url;
    double _duration;
    FCHLSKey *_key;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCHLSKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) FCHLSMap *map; // @synthesize map=_map;
- (id)description;
- (id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4;

@end

