//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICStorePlatformResponse-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse>
{
    NSArray *_childResponses;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
- (id)itemForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSArray *allItems;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier;
- (id)initWithResponses:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

