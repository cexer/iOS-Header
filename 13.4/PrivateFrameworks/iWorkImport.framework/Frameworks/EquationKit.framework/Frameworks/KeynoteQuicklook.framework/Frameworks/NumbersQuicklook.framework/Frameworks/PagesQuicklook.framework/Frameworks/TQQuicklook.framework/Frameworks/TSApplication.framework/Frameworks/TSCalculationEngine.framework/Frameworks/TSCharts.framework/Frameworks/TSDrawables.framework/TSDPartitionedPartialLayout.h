//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout
{
    struct CGRect mBounds;
    TSDDefaultPartitioner *mPartitioner;
    _Bool _isLayoutRTL;
}

@property(readonly, nonatomic) _Bool isLayoutRTL; // @synthesize isLayoutRTL=_isLayoutRTL;
@property(readonly, nonatomic) TSDDefaultPartitioner *partitioner; // @synthesize partitioner=mPartitioner;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (void)processChanges:(id)arg1;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithInfo:(id)arg1 bounds:(struct CGRect)arg2 partitioner:(id)arg3 isLayoutRTL:(_Bool)arg4;

@end

