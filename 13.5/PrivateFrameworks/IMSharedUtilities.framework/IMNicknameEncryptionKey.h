//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IMNicknameEncryptionKey : NSObject
{
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly) const void *bytes;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

