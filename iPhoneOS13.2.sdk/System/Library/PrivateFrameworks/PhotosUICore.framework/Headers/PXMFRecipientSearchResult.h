//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMFComposeRecipient.h>

#import <PhotosUICore/PXRecipientSearchResult-Protocol.h>

@class NSString;

@interface PXMFRecipientSearchResult : PXMFComposeRecipient <PXRecipientSearchResult>
{
    long long _validationType;
}

@property(nonatomic) long long validationType; // @synthesize validationType=_validationType;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

