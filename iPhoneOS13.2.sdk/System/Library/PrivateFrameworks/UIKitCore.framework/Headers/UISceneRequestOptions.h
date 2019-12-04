//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneRequestOptions.h>

#import <UIKitCore/BSXPCSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface UISceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding>
{
    _Bool _requestFullscreen;
    _Bool _requestBackground;
    _Bool _preserveLayout;
    NSString *_sourceIdentifier;
    NSSet *_actions;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(nonatomic) _Bool preserveLayout; // @synthesize preserveLayout=_preserveLayout;
@property(nonatomic) _Bool requestBackground; // @synthesize requestBackground=_requestBackground;
@property(nonatomic) _Bool requestFullscreen; // @synthesize requestFullscreen=_requestFullscreen;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

