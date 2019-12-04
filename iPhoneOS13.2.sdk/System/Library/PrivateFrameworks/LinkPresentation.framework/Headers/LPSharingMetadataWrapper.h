//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>
{
    _Bool _hasFetchedSubresources;
    _Bool _hasCompletedFetch;
    LPLinkMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasCompletedFetch; // @synthesize hasCompletedFetch=_hasCompletedFetch;
@property(nonatomic) _Bool hasFetchedSubresources; // @synthesize hasFetchedSubresources=_hasFetchedSubresources;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;

@end

