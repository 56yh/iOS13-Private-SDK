//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDConfigurationMessagePolicy : HMFMessagePolicy
{
    unsigned long long _operationTypes;
}

+ (id)policyWithOperationTypes:(unsigned long long)arg1;
@property(readonly) unsigned long long operationTypes; // @synthesize operationTypes=_operationTypes;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationTypes:(unsigned long long)arg1;
- (id)init;

@end

