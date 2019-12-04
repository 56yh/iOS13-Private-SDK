//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HFActionSetServiceSuggestionMetadata : NSObject
{
    NSString *_serviceType;
    NSString *_primaryCharacteristicType;
    NSArray *_secondaryCharacteristicTypes;
}

+ (id)metadataForServiceType:(id)arg1;
@property(readonly, nonatomic) NSArray *secondaryCharacteristicTypes; // @synthesize secondaryCharacteristicTypes=_secondaryCharacteristicTypes;
@property(readonly, nonatomic) NSString *primaryCharacteristicType; // @synthesize primaryCharacteristicType=_primaryCharacteristicType;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (id)initWithServiceType:(id)arg1 primaryCharacteristicType:(id)arg2 secondaryCharacteristicTypes:(id)arg3;

@end

