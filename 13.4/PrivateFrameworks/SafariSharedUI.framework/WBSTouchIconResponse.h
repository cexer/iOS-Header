//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

#import <SafariSharedUI/WBSIconResponse-Protocol.h>

@class NSString, UIColor, UIImage;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    _Bool _generated;
    UIImage *_touchIcon;
    UIColor *_extractedBackgroundColor;
}

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isGenerated) _Bool generated; // @synthesize generated=_generated;
@property(readonly, nonatomic) UIColor *extractedBackgroundColor; // @synthesize extractedBackgroundColor=_extractedBackgroundColor;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

