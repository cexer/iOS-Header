//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface MapsDragManager : NSObject
{
    id <UIDragSession> _dragSession;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(readonly, nonatomic) _Bool canStartNewDrag;

@end

