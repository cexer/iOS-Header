//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource
{
    NSMutableDictionary *_loadingGroups;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadingGroups; // @synthesize loadingGroups=_loadingGroups;
- (void)loadImageForURLString:(id)arg1 loader:(CDUnknownBlockType)arg2 reference:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(_Bool)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)imageNeedsRefresh:(id)arg1;

@end

