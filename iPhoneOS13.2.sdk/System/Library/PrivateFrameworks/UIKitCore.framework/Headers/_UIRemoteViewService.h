//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSUUID;
@protocol PKPlugIn;

@interface _UIRemoteViewService : NSObject
{
    _Bool _overridesHostAppearance;
    NSExtension *_extension;
    NSUUID *_contextToken;
}

@property(copy, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(readonly, nonatomic) _Bool overridesHostAppearance; // @synthesize overridesHostAppearance=_overridesHostAppearance;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)updateOverridesHostAppearance;
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;

@end

