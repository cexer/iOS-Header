//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPAbstractMutableLargeDictionarySegment.h>

@interface TSPMutableLargeStringToObjectDictionarySegment : TSPAbstractMutableLargeDictionarySegment
{
}

- (void)loadFromMessage:(const struct LargeStringToObjectDictionarySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeStringToObjectDictionarySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1 andKey:(id)arg2;

@end

