//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionary : CEMPayloadBase
{
    NSDictionary *_statusANY;
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSDictionary *statusANY; // @synthesize statusANY=_statusANY;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

