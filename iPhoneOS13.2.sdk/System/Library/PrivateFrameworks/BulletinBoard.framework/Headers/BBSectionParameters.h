//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class BBSectionIcon, BBSectionSubtypeParameters, NSMutableDictionary, NSString, NSUUID;

@interface BBSectionParameters : NSObject <NSSecureCoding>
{
    _Bool _showsSubtitle;
    _Bool _usesVariableLayout;
    _Bool _orderSectionUsingRecencyDate;
    _Bool _showsDateInFloatingLockScreenAlert;
    unsigned long long _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property(nonatomic) _Bool showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property(nonatomic) _Bool orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property(nonatomic) _Bool usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;
@property(nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) _Bool showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)allSubtypes;
- (id)parametersForSubtype:(long long)arg1;
- (id)init;

@end

