//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMessageCollectionItemID.h>

#import <Email/EFCacheable-Protocol.h>

@class NSString;

@interface _EMMessageDatabaseIDCollectionItemID : EMMessageCollectionItemID <EFCacheable>
{
    long long _databaseID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (id)cachedSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

