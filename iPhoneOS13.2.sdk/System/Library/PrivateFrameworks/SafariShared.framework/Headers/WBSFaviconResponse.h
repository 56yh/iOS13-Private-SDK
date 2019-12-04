//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

#import <SafariShared/WBSIconResponse-Protocol.h>

@class NSString, UIColor, UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    UIImage *_favicon;
    unsigned long long _faviconType;
}

@property(readonly, nonatomic) unsigned long long faviconType; // @synthesize faviconType=_faviconType;
@property(readonly, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
@property(readonly, nonatomic) UIImage *icon;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIColor *extractedBackgroundColor;
@property(readonly, nonatomic, getter=isGenerated) _Bool generated;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

