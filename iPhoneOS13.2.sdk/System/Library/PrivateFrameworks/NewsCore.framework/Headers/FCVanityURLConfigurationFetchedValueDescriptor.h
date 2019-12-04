//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor
{
    FCFetchedValueManager *_configurationManager;
}

@property(readonly, nonatomic) FCFetchedValueManager *configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)_vanityURLConfiguration;
- (id)inputManagers;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)fastCachedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigurationManager:(id)arg1;
- (id)init;

@end

