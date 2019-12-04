//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/AMSBagProtocol-Protocol.h>

@class ISURLBag, NSDate, NSString, SSBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol>
{
    SSBag *_bag;
    ISURLBag *_URLBag;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) ISURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property(retain, nonatomic) SSBag *bag; // @synthesize bag=_bag;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
- (_Bool)isLoaded;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithURLBag:(id)arg1;
- (id)initWithBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

