//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject
{
    NSString *_character;
    SCNNode *_node;
}

+ (id)characterWithCharacter:(id)arg1 node:(id)arg2;
@property(retain, nonatomic) SCNNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSString *character; // @synthesize character=_character;

@end

