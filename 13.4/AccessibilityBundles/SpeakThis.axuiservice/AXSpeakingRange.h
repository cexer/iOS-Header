//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXUIElement;

@interface AXSpeakingRange : NSObject
{
    AXUIElement *_element;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) AXUIElement *element; // @synthesize element=_element;
- (id)description;

@end

