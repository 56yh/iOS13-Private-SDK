//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class IMNicknameAvatarImage, NSString;

@interface IMNickname : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_firstName;
    NSString *_lastName;
    IMNicknameAvatarImage *_avatar;
    NSString *_displayName;
    NSString *_handle;
    NSString *_recordID;
}

+ (id)nameHashWithFirstName:(id)arg1 lastName:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)uniqueFilePathForWritingImageData;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) IMNicknameAvatarImage *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void)updateNameFromContact:(id)arg1;
- (_Bool)isUpdateFromNickname:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)_sharingState;
- (id)_imageHashCreatedInChunks;
@property(readonly, nonatomic) NSString *imageHash;
@property(readonly, nonatomic) NSString *nameHash;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (id)publicDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithMeContact:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3;
- (id)init;
- (_Bool)isEqual:(id)arg1;

@end

