//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WDClinicalSampleAccountProvider;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccount : NSObject
{
    NSDictionary *_properties;
    WDClinicalSampleAccountProvider *_provider;
    NSArray *_batches;
}

@property(copy, nonatomic) NSArray *batches; // @synthesize batches=_batches;
@property(retain, nonatomic) WDClinicalSampleAccountProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;

@end

