//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VUIButton, VUIUpNextStateView;
@protocol VUIUpNextButtonProtocol;

__attribute__((visibility("hidden")))
@interface VUIUpNextButtonProperties : NSObject
{
    BOOL _dismissOnSelect;
    BOOL _isWatchListed;
    VUIUpNextStateView *_addedStateView;
    VUIUpNextStateView *_removedStateView;
    VUIButton<VUIUpNextButtonProtocol> *_delegate;
    NSString *_canonicalID;
}

+ (id)configureWithElement:(id)arg1 existingButton:(id)arg2;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(nonatomic) BOOL isWatchListed; // @synthesize isWatchListed=_isWatchListed;
@property(nonatomic) BOOL dismissOnSelect; // @synthesize dismissOnSelect=_dismissOnSelect;
@property(nonatomic) __weak VUIButton<VUIUpNextButtonProtocol> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VUIUpNextStateView *removedStateView; // @synthesize removedStateView=_removedStateView;
@property(readonly, nonatomic) VUIUpNextStateView *addedStateView; // @synthesize addedStateView=_addedStateView;
// - (void).cxx_destruct;
- (void)_errorInUpdatingState:(id)arg1;
- (void)dealloc;
- (void)updateButtonContentView;
- (void)callAPIAndToggleUpNextState;
- (void)_toggleUpNextState;
- (id)init;

@end
