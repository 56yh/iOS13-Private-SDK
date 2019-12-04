//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class AKAuthorizationScopesUserSelection, NSNumber, NSString;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _selectedRequest;
    AKAuthorizationScopesUserSelection *_userSelection;
    NSNumber *_loginChoice;
    NSString *_rawAccountPassword;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *rawAccountPassword; // @synthesize rawAccountPassword=_rawAccountPassword;
@property(retain, nonatomic) NSNumber *loginChoice; // @synthesize loginChoice=_loginChoice;
@property(retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> selectedRequest; // @synthesize selectedRequest=_selectedRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

