BEGIN
  DECLARE voltage AS DOUBLE

  FOR i = 1 TO 10 DO
    PRINT "Enter battery voltage reading ", i, " (V): "
    INPUT voltage

    IF voltage < 10.5 THEN
      PRINT "Low battery detected. Test stopped."
      BREAK
    ELSE
      PRINT "Battery voltage normal: ", voltage, " V"
    END IF

  END FOR

END