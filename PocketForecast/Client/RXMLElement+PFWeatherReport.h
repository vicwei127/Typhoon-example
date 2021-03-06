////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2015, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#import "RXMLElement.h"

@class PFWeatherReport;
@class PFCurrentConditions;
@class PFForecastConditions;

@interface RXMLElement (PFWeatherReport)

- (PFWeatherReport*) asWeatherReport;

- (PFCurrentConditions*)asCurrentCondition;

- (PFForecastConditions*) asForecastConditions;



@end