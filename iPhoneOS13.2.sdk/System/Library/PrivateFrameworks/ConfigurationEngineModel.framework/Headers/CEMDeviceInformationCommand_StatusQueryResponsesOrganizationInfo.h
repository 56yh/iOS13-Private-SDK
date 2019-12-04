//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase
{
    NSString *_statusOrganizationName;
    NSString *_statusOrganizationAddress;
    NSString *_statusOrganizationPhone;
    NSString *_statusOrganizationEmail;
    NSString *_statusOrganizationMagic;
}

+ (id)buildRequiredOnlyWithOrganizationName:(id)arg1;
+ (id)buildWithOrganizationName:(id)arg1 withOrganizationAddress:(id)arg2 withOrganizationPhone:(id)arg3 withOrganizationEmail:(id)arg4 withOrganizationMagic:(id)arg5;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusOrganizationMagic; // @synthesize statusOrganizationMagic=_statusOrganizationMagic;
@property(copy, nonatomic) NSString *statusOrganizationEmail; // @synthesize statusOrganizationEmail=_statusOrganizationEmail;
@property(copy, nonatomic) NSString *statusOrganizationPhone; // @synthesize statusOrganizationPhone=_statusOrganizationPhone;
@property(copy, nonatomic) NSString *statusOrganizationAddress; // @synthesize statusOrganizationAddress=_statusOrganizationAddress;
@property(copy, nonatomic) NSString *statusOrganizationName; // @synthesize statusOrganizationName=_statusOrganizationName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

