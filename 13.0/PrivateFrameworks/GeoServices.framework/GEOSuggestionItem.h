//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying>
{
    NSString *_suggestionString;
    int _tappingCount;
    _Bool _eventuallyVisible;
    _Bool _initiallyVisible;
    struct {
        unsigned int has_tappingCount:1;
        unsigned int has_eventuallyVisible:1;
        unsigned int has_initiallyVisible:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTappingCount;
@property(nonatomic) int tappingCount;
@property(nonatomic) _Bool hasEventuallyVisible;
@property(nonatomic) _Bool eventuallyVisible;
@property(nonatomic) _Bool hasInitiallyVisible;
@property(nonatomic) _Bool initiallyVisible;
@property(retain, nonatomic) NSString *suggestionString;
@property(readonly, nonatomic) _Bool hasSuggestionString;

@end

