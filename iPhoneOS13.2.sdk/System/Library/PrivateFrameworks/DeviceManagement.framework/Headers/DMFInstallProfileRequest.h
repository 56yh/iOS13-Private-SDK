//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFInstallProfileRequest : DMFTaskRequest
{
    unsigned long long _style;
    unsigned long long _type;
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
    NSString *_personaID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

