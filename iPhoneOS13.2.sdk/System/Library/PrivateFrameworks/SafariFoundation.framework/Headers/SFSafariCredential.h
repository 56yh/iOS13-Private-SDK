//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString;
@protocol SFSafariPasswordCredential;

@interface SFSafariCredential : NSObject <NSSecureCoding>
{
    NSString *_user;
    NSString *_password;
    NSString *_site;
    NSDate *_creationDate;
    id <SFSafariPasswordCredential> _externalCredential;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <SFSafariPasswordCredential> externalCredential; // @synthesize externalCredential=_externalCredential;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isExternal) _Bool external;
- (id)initWithExternalCredential:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4;

@end
