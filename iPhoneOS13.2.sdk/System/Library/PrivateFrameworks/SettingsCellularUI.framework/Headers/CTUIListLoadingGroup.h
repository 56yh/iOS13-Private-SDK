//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListLoadingGroup : NSObject
{
    NSArray *_specifiers;
    PSListController *_hostController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;

@end

