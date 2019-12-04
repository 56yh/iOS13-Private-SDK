//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NTKComplication;
@protocol NTKTemplateComplicationDisplay;

@interface NTKDetachedComplicationHandlerDescriptor : NSObject
{
    NSString *_identifier;
    long long _family;
    NTKComplication *_complication;
    id <NTKTemplateComplicationDisplay> _display;
    NSString *_bundleIdentifier;
}

@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <NTKTemplateComplicationDisplay> display; // @synthesize display=_display;
@property(retain, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
@property(nonatomic) long long family; // @synthesize family=_family;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

