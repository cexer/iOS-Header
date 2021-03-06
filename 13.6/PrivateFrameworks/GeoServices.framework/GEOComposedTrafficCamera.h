//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedEnrouteNotice.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding>
{
    GEOTrafficCamera *_trafficCamera;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int cameraPriority;
@property(readonly, nonatomic) _Bool hasCameraPriority;
@property(readonly, nonatomic) double speedThreshold;
@property(readonly, nonatomic) _Bool hasSpeedThreshold;
@property(readonly, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) _Bool hasSpeedLimitText;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) int type;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3;

@end

