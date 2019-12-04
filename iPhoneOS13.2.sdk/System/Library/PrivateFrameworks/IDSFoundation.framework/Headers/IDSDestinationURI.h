//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (id)description;
- (id)groupID;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURIString:(id)arg1;
- (id)initWithURI:(id)arg1;

@end

