//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject
{
    _Bool _important;
    NSString *_name;
    struct _NSRange _nameRange;
    struct _NSRange _valueRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool important; // @synthesize important=_important;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(nonatomic) struct _NSRange nameRange; // @synthesize nameRange=_nameRange;
- (id)description;
- (id)init;

@end

