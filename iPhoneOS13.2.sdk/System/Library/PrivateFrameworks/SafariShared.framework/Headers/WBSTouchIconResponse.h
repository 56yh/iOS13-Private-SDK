//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

#import <SafariShared/WBSIconResponse-Protocol.h>

@class NSString, UIColor, UIImage;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    _Bool _generated;
    UIImage *_touchIcon;
    UIColor *_extractedBackgroundColor;
}

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;
@property(readonly, nonatomic, getter=isGenerated) _Bool generated; // @synthesize generated=_generated;
@property(readonly, nonatomic) UIColor *extractedBackgroundColor; // @synthesize extractedBackgroundColor=_extractedBackgroundColor;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

