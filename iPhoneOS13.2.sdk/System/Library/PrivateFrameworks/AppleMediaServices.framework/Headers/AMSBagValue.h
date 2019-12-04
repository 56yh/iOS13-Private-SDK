//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject
{
    ACAccount *_account;
    id <AMSBagDataSourceProtocol> _dataSource;
    NSString *_key;
    unsigned long long _valueType;
}

+ (_Bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)globalBagValueStorage;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
@property(nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)valuePromise;
- (id)valueWithError:(id *)arg1;
- (void)valueWithCompletion:(id /* block */)arg1;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;

@end

